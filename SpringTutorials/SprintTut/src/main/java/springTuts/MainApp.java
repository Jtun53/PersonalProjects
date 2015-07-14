package springTuts;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;
import org.springframework.context.support.FileSystemXmlApplicationContext;

public class MainApp {

	public static void main(String[] args) {

		ApplicationContext context = new FileSystemXmlApplicationContext("Bean.xml");
		HelloWorld objA = (HelloWorld) context.getBean("helloWorld");
		HelloIndia objB = (HelloIndia) context.getBean("helloIndia");
		objA.getMessage(); //Should return hello world
		objB.getMessage1(); //should return hello india
		objB.getMessage2(); //should return hello second world since inherited from parent
		objB.getMessage3(); //should return namaste india
		ApplicationContext context2 = new AnnotationConfigApplicationContext(HelloWorldConfig.class);
		
		HelloWorld helloWorld2 = context2.getBean(HelloWorld.class); //uses config file to return new HelloWorld object
		helloWorld2.setMessage1("Hello World");
		helloWorld2.getMessage();
	}
}
