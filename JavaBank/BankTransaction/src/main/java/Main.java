import net.sf.ofx4j.client.*;
import net.sf.ofx4j.client.impl.FinancialInstitutionServiceImpl;
import net.sf.ofx4j.client.impl.OFXHomeFIDataStore;
import net.sf.ofx4j.domain.data.banking.BankAccountDetails;

public class Main {

	public static void main(String[] args) {
		System.out.println("test");
		OFXHomeFIDataStore fid = new OFXHomeFIDataStore();
		fid.setUrl("https://ofx.bankofamerica.com/cgi-forte/ofx?servicename=ofx_2-3&pagename=bofa");
		FinancialInstitutionData bofa = fid.getInstitutionData("6805");
		FinancialInstitutionService service = new FinancialInstitutionServiceImpl();
		FinancialInstitution fi = service.getFinancialInstitution(bofa);
		
	}

}
