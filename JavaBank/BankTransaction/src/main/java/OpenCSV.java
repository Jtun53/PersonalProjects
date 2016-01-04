import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.List;

import au.com.bytecode.opencsv.CSVReader;

/**
 * 
 * @author John Tungul
 * This class will be used to read in a CSV file
 * to create transaction objects 
 */
public class OpenCSV{
	CSVReader aReader;
	/**
	 * 
	 * @param fileName
	 * OpenCSV constructor takes in a csv filename
	 * for reading monthly transactions and creating a
	 * list of transactions
	 */
	public OpenCSV(String fileName){
		try {
		    aReader = new CSVReader(new FileReader(fileName));
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	
	List<transactions> createListOfTransactions(){
		return null;
	}
}
