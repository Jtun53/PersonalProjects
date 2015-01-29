//package team5;
import java.awt.*;
import java.applet.*;
import java.awt.event.*;

import javax.swing.*;

public class Main extends Applet implements ActionListener {
private TextField loginField;
private TextField passwordField;
private TextField AuthorizationField;
private TextField FName;
private TextField LName;
private TextField SSN;
private TextField subGroup;
private TextField country;
private TextField state;
private TextField city;
private TextField address;
private TextField zip;
private TextField connections;
private TextField Notes;
private TextField newLogin;
private TextField newPassword;

private JButton testButton;

String[] propVote= {"Vote","Yes","No"};
JComboBox propVoteChoice = new JComboBox(propVote);

String[] propStrings ={"0","1","2","3","4","5","6","7","8","9","10"};
JComboBox propId = new JComboBox(propStrings);

String[] isEmployee = {"Employee?","Yes","No"};
JComboBox employee = new JComboBox(isEmployee);

String[] clearanceLevels = {"Clearance:","Top Secret","Classified","Restricted","None"};
JComboBox clearance = new JComboBox(clearanceLevels);


ButtonGroup PropVote = new ButtonGroup();
TextField notes = new TextField("Description:");

String[] resourceList = {"Resource List"};
JComboBox resources = new JComboBox(resourceList);


String[] threatLevelList={"Level","0","1","2","3"};
JComboBox threat = new JComboBox(threatLevelList);

String[] reportStrings = {"Run Reports","Display SubGroups","List Active Propositions","Display Potential Threats",
		  "Display all Registered","Proximity Scan","List High Threat Levels","List EM resources"};
JComboBox reports = new JComboBox(reportStrings);
private Label loginLabel;
private Label passwordLabel;

public void setAllDisabled(){
	clearance.setEnabled(false);
	employee.setEnabled(false);
	notes.setEnabled(false);
	city.setEnabled(false);
	zip.setEnabled(false);
	state.setEnabled(false);
	subGroup.setEnabled(false);
	country.setEnabled(false);
	SSN.setEnabled(false);
	LName.setEnabled(false);
	FName.setEnabled(false);
	address.setEnabled(false);
	resources.setEnabled(false);
	threat.setEnabled(false);
	propId.setEnabled(false);
	propVoteChoice.setEnabled(false);
	connections.setEnabled(false);
	newLogin.setEnabled(false);
	newPassword.setEnabled(false);
};


public void init(){
	super.init();
	setLayout(null);
	
	new DHSInit();
	UserManagement.login("admin", "admin");
	Reports.test();
	System.out.print(DomainLogic.output);
	
	loginField = new TextField(130);
	loginField.setBounds(100,10,80,20);
	add(loginField);
	
	loginLabel = new Label("Login:");
	loginLabel.setBounds (20,10,70,20);
	add(loginLabel);
	
	AuthorizationField = new TextField(180);
	AuthorizationField.setBounds(200,10,150,20);
	AuthorizationField.setEnabled(false);
	AuthorizationField.setText("Authorization Level: ");
	add (AuthorizationField);
	
	passwordField = new TextField(130);
	passwordField.setBounds(100,50,80,20);
	add(passwordField);
	
	passwordLabel = new Label("Password:");
	passwordLabel.setBounds(20,50,70,10);
	add(passwordLabel);
	
	
	
	reports.setBounds(20,90,150,30);
	add(reports);
	
	String[] actionString = {"Select Action","Search for Person","Create/Edit Person","Vote on Proposition","Generate Proposition","Create Threat","Create EM Resources"};
	
	final JComboBox actions = new JComboBox(actionString);
	
	
	reports.addActionListener(new ActionListener(){
		public void actionPerformed(ActionEvent e){
		
			if(reports.getSelectedItem()=="Display SubGroups"){
				actions.setSelectedItem("Select Action");
				setAllDisabled();
				
			}
			
			if(reports.getSelectedItem()=="List Active Propositions"){
				actions.setSelectedItem("Select Action");
				setAllDisabled();
			}
			
			if(reports.getSelectedItem()=="Display Potential Threats"){
				actions.setSelectedItem("Select Action");
				setAllDisabled();
			}
			
			if(reports.getSelectedItem()=="Display all Registered"){
				actions.setSelectedItem("Select Action");
				setAllDisabled();
			}
			
			if(reports.getSelectedItem()=="Proximity Scan"){
				actions.setSelectedItem("Select Action");
				setAllDisabled();
			}
			
			if(reports.getSelectedItem()=="List High Threat Levels"){
				actions.setSelectedItem("Select Action");
				setAllDisabled();
			}
			
			if(reports.getSelectedItem()=="List EM resources"){
				actions.setSelectedItem("Select Action");
				setAllDisabled();
			}
			
		}
	});
	
	
	
	actions.addActionListener(new ActionListener(){
		public void actionPerformed(ActionEvent e)
		{
			if (actions.getSelectedItem()== "Search for Person"){
				setAllDisabled();
				reports.setSelectedItem("Run Reports");
				SSN.setEnabled(true);
			}
			if (actions.getSelectedItem()== "Create/Edit Person"){
				setAllDisabled();
				reports.setSelectedItem("Run Reports");
				SSN.setEnabled(true);
				FName.setEnabled(true);
				LName.setEnabled(true);
				country.setEnabled(true);
				address.setEnabled(true);
				state.setEnabled(true);
				zip.setEnabled(true);
				city.setEnabled(true);
				clearance.setEnabled(true);
				employee.setEnabled(true);
				newLogin.setEnabled(true);
				newPassword.setEnabled(true);
				
				
			}
			if(actions.getSelectedItem() =="Vote on Proposition"){
				setAllDisabled();
				reports.setSelectedItem("Run Reports");
				propId.setEnabled(true);
				propVoteChoice.setEnabled(true);
				notes.setEnabled(true);
			}
			
			if (actions.getSelectedItem() =="Generate Proposition"){
				setAllDisabled();
				reports.setSelectedItem("Run Reports");
				notes.setEnabled(true);
				connections.setEnabled(true);
				
			}
			if(actions.getSelectedItem() == "Create Threat"){
				setAllDisabled();
				reports.setSelectedItem("Run Reports");
				connections.setEnabled(true);
				notes.setEnabled(true);
				threat.setEnabled(true);
			}
			if (actions.getSelectedItem()=="Create EM Resources"){
				setAllDisabled();
				reports.setSelectedItem("Run Reports");
				connections.setEnabled(true);
			}
			
			
		}

	}
	
			);
	
	actions.setBounds(20,130,150,30);
	add(actions);
	
	
	propId.setBounds(180,130,100,30);
	propId.setEnabled(false);
	add(propId);
	

	
	propVoteChoice.setBounds(290,135,100,20);
	propVoteChoice.setEnabled(false);
	add(propVoteChoice);
	
	
	JButton submit = new JButton("Submit");
	submit.setBounds(180,180,100,40);
	add(submit);
	
	JButton testButton = new JButton("Test");
	testButton.setBounds(60,180,100,40);
	add(testButton);
	
	final TextArea outputArea = new TextArea("Output Text");
	outputArea.setBounds(20,360,600,200);
	add(outputArea);

	FName = new TextField("First Name:");
	FName.setBounds(400,10,110,20);
	FName.setEnabled(false);
	add(FName);
	
	LName = new TextField("Last Name:");
	LName.setBounds(400,40,110,20);
	LName.setEnabled(false);
	add(LName);
	
	newLogin = new TextField("New User Login:");
	newLogin.setBounds(530,40,110,20);
	newLogin.setEnabled(false);
	add(newLogin);
	
	newPassword = new TextField("New User Pass:");
	newPassword.setBounds(660,40,110,20);
	newPassword.setEnabled(false);
	add(newPassword);
	SSN = new TextField("SSN:");
	SSN.setBounds(400,70,110,20);
	SSN.setEnabled(false);
	add(SSN);
	
	country = new TextField("Country: ");
	country.setBounds(400,100,110,20);
	country.setEnabled(false);
	add(country);
	
	address = new TextField("Address: ");
	address.setBounds(400,130,110,20);
	address.setEnabled(false);
	add(address);
	
	connections = new TextField("Title: ");
	connections.setBounds(400,160,300,20);
	connections.setEnabled(false);
	add(connections);
	
	subGroup = new TextField("Subgroup: ");
	subGroup.setBounds(530,70,110,20);
	subGroup.setEnabled(false);
	add(subGroup);
	
	state = new TextField("State: ");
	state.setBounds(530,100,110,20);
	state.setEnabled(false);
	add(state);
	
	zip = new TextField("Zip: ");
	zip.setBounds(530,130,110,20);
	zip.setEnabled(false);
	add(zip);
	
	city = new TextField("City: ");
	city.setBounds(660,100,110,20);
	city.setEnabled(false);
	add(city);
	
	
	notes.setBounds(400,220,300,100);
	notes.setEnabled(false);
	add(notes);
	
	resources.setBounds(500,190,200,20);
	resources.setEnabled(false);
	add(resources);

	threat.setBounds(400,190,100,20);
	threat.setEnabled(false);
	add(threat);
	
	
	
	employee.setBounds(525,10,120,20);
	employee.setEnabled(false);
	add(employee);
	
	
	clearance.setBounds(655,10,120,20);
	clearance.setEnabled(false);
	add(clearance);
	
	
	testButton.addActionListener(new ActionListener(){
		public void actionPerformed(ActionEvent e){
			
			outputArea.setText(DomainLogic.output);
		}
	});
	


submit.addActionListener(new ActionListener(){
	public void actionPerformed(ActionEvent e){
		
	
		String login=loginField.getText();
		String password = passwordField.getText();
		
		UserManagement.login(login,password);
		
		if(reports.getSelectedItem()=="Display SubGroups"){
			Reports.displaySubgroups();
			outputArea.setText(DomainLogic.output);
		}
		
		if(reports.getSelectedItem()=="List Active Propositions"){
			Reports.listPropositions();
			outputArea.setText(DomainLogic.output);
		}
	
		if(reports.getSelectedItem()=="Display Potential Threats"){
			Reports.displayThreats();
			outputArea.setText(DomainLogic.output);
		}
		
		if(reports.getSelectedItem()=="Display all Registered"){
			outputArea.setText("Feature Coming Soon");
		}
		
		if(reports.getSelectedItem()=="Proximity Scan"){
			Reports.proximityScan();
			outputArea.setText(DomainLogic.output);
		}
		if(reports.getSelectedItem()=="List High Threat Levels"){
			Reports.displayPersonThreats();
			outputArea.setText(DomainLogic.output);
		}
		
		if(reports.getSelectedItem()=="List EM resources"){
			Reports.displayERR();
			outputArea.setText(DomainLogic.output);
		}
		
		if (actions.getSelectedItem()== "Search for Person"){
			UserManagement.searchPerson(SSN.getText(), FName.getText(), LName.getText(), country.getText(), address.getText(), (String)employee.getSelectedItem(), state.getText(), zip.getText(), city.getText(), (String)clearance.getSelectedItem(), (String)threat.getSelectedItem());
			outputArea.setText(DomainLogic.output);
		}
		if (actions.getSelectedItem()== "Create/Edit Person"){
			UserManagement.createPerson("Border",newLogin.getText(), newPassword.getText(),SSN.getText(), FName.getText(), LName.getText(), country.getText(), address.getText(), (String)employee.getSelectedItem(), state.getText(), zip.getText(), city.getText(), (String)clearance.getSelectedItem(), (String)threat.getSelectedItem());
			outputArea.setText(DomainLogic.output);
		}
		if(actions.getSelectedItem() =="Vote on Proposition"){
			ProposalManagement.voteOnProp((String)propId.getSelectedItem(), (String)propVoteChoice.getSelectedItem(), notes.getText());
			outputArea.setText(DomainLogic.output);

		}
		if (actions.getSelectedItem() =="Generate Proposition"){
			ProposalManagement.createProposal(connections.getText(), notes.getText(), "Border", "1", "1");
			outputArea.setText(DomainLogic.output);
			
		}
		if(actions.getSelectedItem() == "Create Threat"){
			ThreatManagement.createThreat(connections.getText(), notes.getText(), (String)threat.getSelectedItem());
			outputArea.setText(DomainLogic.output);
		}
		
		if (actions.getSelectedItem()=="Create EM Resources"){
		EmRescManagement.createERR(connections.getText(), "Border");
		outputArea.setText(DomainLogic.output);
		}
	}
});

}

public void actionPerformed(ActionEvent arg0) {
	// TODO Auto-generated method stub
	
}


}

