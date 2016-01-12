import java.io.IOException;
import java.util.List;

/*New way to implement is needed. Banks charge money for 
direct accessing account info.

Milestone Goal 1: Read bank transaction info manually by downloading
Milestone Goal 2: Generate CSV file with categories and costs
Milestone Goal 2.5: Generate PieChart based on expenses.
Milestone Goal 3: Automatically Parse downloaded files and generate CSV
Milestone Goal 4: Automatically retrieve transaction info from bank


*/
public class Main {
	
	static double total = 0;
	static double foodTotal = 0;
	static double groceryTotal = 0;
	static double billsTotal = 0;
	static double luxuryTotal = 0;
	static final double MONTHLYINCOME = 5000.00;

	public static void main(String[] args) throws IOException{
		OpenCSV reader = new OpenCSV("December.csv");
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
	}

}
