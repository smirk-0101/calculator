package test;
import java.util.Scanner;
public class Test_4 {
	public static void main(String[] args) {
		Student s = new Student();
		Scanner in = new Scanner(System.in);
		int id = in.nextInt();
		String name  = in.next();
		double score = in.nextDouble();
		int id1 = in.nextInt();
		s.setRecord(id,name,score);
		s.getRecord(id1);
		in.close();
	}

}
class Student {
	private int id;
	private double score;
	private String name;
	public void setRecord(int id,String name,double score){
		this.id = id;
		this.name = name;
		this.score = score;
		
	}
	public void getRecord(int id){
		Scanner in = new Scanner(System.in);
		if(id == this.id){
			System.out.println(name);
			System.out.println(score);
		}
		else{
			System.out.printf("输入错误，请重新输入：");
			int id2 = in.nextInt();
			getRecord(id2);
			
		}
			
		
	}
}
