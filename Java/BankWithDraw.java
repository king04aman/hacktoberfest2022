class Bank
{
	float balance=5000.00f;
	synchronized public void withdraw(float amt)
	{
		System.out.println("Customer started to withdraw money");
		try {
			if(balance<amt)
			{
				System.out.println("Less Balance,Waiting for Deposit");
				wait();
			}
			balance -=amt;
			System.out.println("Withdraw completed");			
		} catch (Exception e) {
			System.out.println(e);
		}
	}
	synchronized public void deposit(float amt)
	{
		System.out.println("Customer started to Deposit Money");
		balance +=amt;
		System.out.println("Deposit Completed");
		notify();
	}
}
class Customer1 extends Thread
{
	Bank b;
	Customer1(Bank b)
	{
		this.b=b;
	}
	public void run()
	{
		b.withdraw(5000.0f);
	}
}
class Customer2 extends Thread
{
	Bank b;
	Customer2(Bank b)
	{
		this.b=b;
	}
	public void run()
	{
		b.deposit(5000.00f);
	}
}
public class BankWithDrawExample {
	public static void main(String[] args) {
		Bank b=new Bank();
		Customer1 c1=new Customer1(b);
		c1.start();
		Customer2 c2=new Customer2(b);
		c2.start();		
	}
}
