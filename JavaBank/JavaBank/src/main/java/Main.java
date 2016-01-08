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
	
	static double total=0;
	static final double MONTHLYINCOME = 3000.00;

	public static void main(String[] args) throws IOException{
		OpenCSV reader = new OpenCSV("December.csv");
		List<Transaction> transactions = reader.createListOfTransactions();
		
		for (Transaction s : transactions){
			System.out.println(s);
			total += s.getCost();
		}
	}

}
