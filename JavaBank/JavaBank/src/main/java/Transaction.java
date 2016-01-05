
public class Transaction {
	int type;
	double cost;
	String description;
	
	public Transaction (int type, double cost, String description){
		this.type = type;
		this.cost = cost;
		this.description = description;
	}
	
	public void setType(int type){
		this.type = type;
	};
	
	public int getType(){
		return this.type;
	};
	
	public void setCost(double cost){
		this.cost = cost;
	};
	
	public double getCost(){
		return this.cost;
	};
	
	public void setDescription(String desc){
		this.description = desc;
	};
	
	public String getDescription(){
		return this.description;
	};
	
	public String toString(){
		return new String(type + " " + cost + " " + description);
	};
}
