//------ AI Programming ---------
// Banking system
// Join our underground coding movement @freecodecs (c) Dec, 2019.

interface Account{
   double deposit = 0;
   double balance = 0;
   double rate = 0;
   double withdraw = 0;
   public double interestCalc();
}

class SavingAccount implements Account{
    double deposit;
    double balance;
    double rate = .08;
    double withdraw;
   
    public void deposit(double dipo){
        balance += dipo;
    }
	
    public double interestCalc(){
       return (balance * rate);
    }
    
    public void withdraw(double wdraw) {
        if(wdraw > (balance * .8)){
            System.out.println("Only below 80% of balance withdrawal is acceptable");
        }
        else {
            withdraw = (wdraw * 0.05);
            System.out.println("The withdrawal charge : " + withdraw);
            balance -= (withdraw + wdraw);
        }
    }
}


class CurrentAccount implements Account {
    double deposit;
    double balance;
    double rate = .12;
    double withdraw;
     
    public void deposit(double dip) {
             balance += dip;
     }
     
    public double interestCalc() {
         return (balance * rate);
     }
    
    public void withdraw(double wdraw){
        if(wdraw < 2000)
            System.out.println("Minimum withdrawal is 2000!");
        else {
            if(wdraw > (balance *.9)){
                System.out.println("Only Below 90% of balance withdrawal is acceptable");
                }
            else
               balance -= (withdraw + wdraw);
            } 
        }
 }

public class Bank {

    public static void main(String[] args) {
        SavingAccount savAcc=new SavingAccount();
        CurrentAccount curAcc=new CurrentAccount();
        
        //Abebe open deposit wiz initial 1000
        savAcc.deposit(1000);
        System.out.println("Abebe's Initial Balance : " + savAcc.balance);
        
        //make diposits at different times
        System.out.println("Dipositing 1,500 / 500 / 2,000 Amounts");
        savAcc.deposit(1500);
        savAcc.deposit(500);
        savAcc.deposit(2000);
        System.out.println("Abebe's Saving Account Balance : " + savAcc.balance);
        System.out.println("He's Interest Amount : " + savAcc.interestCalc());
        savAcc.balance += savAcc.interestCalc();
        System.out.println("Balance : " + savAcc.balance);
        
        //Making withrawals from Saving Account
        System.out.println("Withdrawals of 2,000 / 800 / 1,000 Amounts");
        savAcc.withdraw(2000);
        savAcc.withdraw(800);
        savAcc.withdraw(1000);
        
        //Display Net Balance
        System.out.println("Abebe's net balance : " + savAcc.balance);
        System.out.println("---------------------------------------\n");
        
        
        //Aster open account wiz initial 5000
        curAcc.deposit(5000);
        System.out.println("Aster's Initial Balance : " + curAcc.balance);
		System.out.println("Dipositing 2,500 & 3,000 Amounts");
		curAcc.deposit(2500);
        curAcc.deposit(3000);
        // after depositing 2500  & 3000
        System.out.println("Her Current Account Balance : " + curAcc.balance);
        System.out.println("Interest Amount : " + curAcc.interestCalc());
        curAcc.balance += curAcc.interestCalc();
        System.out.println("Balance : " + curAcc.balance);
        System.out.println("Withdrawals of 4,000 & 2,5000 Amounts");
        curAcc.withdraw(4000);
        curAcc.withdraw(2500);
        System.out.println("Aster's net balance : " + curAcc.balance);
        
    }
    
}