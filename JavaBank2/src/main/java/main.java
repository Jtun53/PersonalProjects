/**
 * Created by jtungul on 3/11/16.
 * Milestone Goal 1: Read bank transaction info manually by downloading  DONE
 * Milestone Goal 2: Generate CSV file with categories and costs  DONE
 * Milestone Goal 2.5: Generate PieChart based on expenses.  DONE
 * Milestone Goal 3: Automatically Parse downloaded files and generate CSV ALMOST DONE
 * Milestone Goal 4: Automatically retrieve transaction info from bank  NOT SURE IF POSSIBLE
 * New Goal: Allow user to specify which month to download.
 * Whats Next: - Transition code from JavaBank to JavaBank2 with Google Drive functionality
 *             - Delete file after pie chart is generated.
 */

import java.io.IOException;
import java.util.List;
import org.jfree.ui.ApplicationFrame;
import java.awt.Dimension;
import javax.swing.JPanel;

import org.jfree.chart.ChartFactory;
import org.jfree.chart.ChartPanel;
import org.jfree.chart.JFreeChart;
import org.jfree.data.general.DefaultPieDataset;
import org.jfree.data.general.PieDataset;
import org.jfree.ui.RefineryUtilities;


public class main extends ApplicationFrame{

    static double total = 0;
    static double foodTotal = 0;
    static double groceryTotal = 0;
    static double billsTotal = 0;
    static double luxuryTotal = 0;
    static final double MONTHLYINCOME = 5000.00;

    public main(String title){
        super(title);
        setContentPane(createDemoPanel());
    };

    private static PieDataset createDataset(){
        DefaultPieDataset dataset = new DefaultPieDataset();
        dataset.setValue("Food", foodTotal);
        dataset.setValue("Groceries", groceryTotal);
        dataset.setValue("Bills", billsTotal);
        dataset.setValue("Luxury", luxuryTotal);
        return dataset;
    };

    private static JFreeChart createChart(PieDataset dataset){
        JFreeChart chart = ChartFactory.createPieChart(
                "Transactions", dataset, true, true, false);
        return chart;
    };

    public static JPanel createDemoPanel() {
        JFreeChart chart = createChart(createDataset());
        ChartPanel panel = new ChartPanel(chart);
        panel.setPreferredSize(new Dimension(600,300));
        return panel;
    }

    public static void main(String[] args) throws IOException {
        DriveApi.getFile();
        OpenCSV reader = new OpenCSV("March");
        List<Transaction> transactions = reader.createListOfTransactions();

        for (Transaction s : transactions){
            System.out.println(s);
            total += s.getCost();
            if (s.getType() == 1){
                foodTotal += s.getCost();
            }
            else if(s.getType() == 2){
                groceryTotal += s.getCost();
            }
            else if(s.getType() == 3){
                billsTotal += s.getCost();
            }
            else if(s.getType() == 4){
                luxuryTotal += s.getCost();
            }
        }
        System.out.printf("\nTotal = $%6.2f\n", total);
        System.out.printf("Food = $%6.2f\n", foodTotal);
        System.out.printf("Grocery = $%6.2f\n ", groceryTotal);
        System.out.printf("Bills = $%6.2f\n", billsTotal);
        System.out.printf("Luxury = $%6.2f ", luxuryTotal);



        main pieChart = new main("Transaction");
        pieChart.pack();
        RefineryUtilities.centerFrameOnScreen(pieChart);
        pieChart.setVisible(true);

        DriveApi.deleteFile();
    };
}
