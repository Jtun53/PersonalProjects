package springTuts;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class MainApp {

	public static void main(String[] args) {
		ApplicationContext context = new ClassPathXmlApplicationContext("Bean.xml");
		HelloWorld objA = (HelloWorld) context.getBean("helloWorld");
		
		objA.setMessage("Object A");
		objA.getMessage();
		
		HelloWorld objB = (HelloWorld) context.getBean("helloWorld");
		objB.getMessage();//should be "Object A" since singleton bean
	}

}
