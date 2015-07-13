package springTuts;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class MainApp {

	public static void main(String[] args) {
		ApplicationContext context = new ClassPathXmlApplicationContext("Bean.xml");
		HelloWorld objA = (HelloWorld) context.getBean("helloWorld");
		HelloIndia objB = (HelloIndia) context.getBean("helloIndia");
		objA.getMessage(); //Should return hello world
		objB.getMessage1(); //should return hello india
		objB.getMessage2(); //should return hello second world since inherited from parent
		objB.getMessage3(); //should return namaste india
	}
}
