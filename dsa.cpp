
#include <iostream>
int main(){
std::cout<<"Welcome,This program analyzes product sales and inventory.\n";
std::cout<<"C++ is a compiler.'\n'";

std::string Product;
int Category;
int InitialInventory;
float Price;
int itemsSold;
std::cout<<"what is the initial inventory? \n";
std::cin>>InitialInventory;
std::cout<<"How many items are sold? ";
std::cin>>itemsSold;
std::cout<<"what is the product category (1-5)? \n";
std::cin>>Category;
std::cout<<"What is the name of the product? \n";
std::cin>>Product;
std::cout<<"What is the price of the product? ";
std::cin>>Price;
if (Category<1 || Category>5){
 std::cout<<"The product category must be between 1 and 5";
 return 1;}
 switch (Category)
 {case 1:
    std::cout<<"Category 1: Electronics. '\n'";
    break;
  case 2:  
  std::cout<<"Category 2: Groceries. '\n'";
   break;
 case 3:
 std::cout<<"Category 3: Clothing '\n'";
 break;
 case 4:
 std::cout<<"Category4: Stationary";
 break;
 case 5:
 std::cout<<"Category 5: Miscellaneous";
 break;
}

std::cout << "Receipt:\n";
for (int i = 1; i <= itemsSold; ++i) {
    std::cout << "Item " << i << "= " << Price << " birr\n"; }
    



int newInventory=InitialInventory-itemsSold;
float totalSales=itemsSold*Price;

std::string inventoryStatus = (newInventory < 10) ? "Low Inventory" : "Sufficient Inventory";
std::cout<<"Inventory Status: "<<inventoryStatus<<'\n';
//sample
std::string SampleProduct="Shoes";
int SampleCategory=5;
float SamplePrice=10.99;
int Sample_itemsSold=4;
auto copy_totalSales=totalSales;
decltype (InitialInventory) helper=7;
float TAX_RATE_PREPROCESSOR;
  decltype (TAX_RATE_PREPROCESSOR)TR=0.15;
const float TAX_RATE=0.15;
std::cout<<"Detailed summary: \n";
std::cout<<"Tax Rate Pre processor= "<<TR*100<<"% \n";
std::cout<<"tax rate = "<<TAX_RATE*100<<"% \n";
std::cout<<"Name = "<<Product<<'\n';
std::cout<<"Category ="<<Category<<'\n';
std::cout<<"Initial inventory ="<<InitialInventory<<'\n';
std::cout<<"Price= "<<Price<<'\n';
std::cout<<"Items Sold = "<<itemsSold<<'\n';
std::cout<<"New Inventory ="<<newInventory<<'\n';
std::cout<<"Total sales = " <<totalSales<<"birr"<<'\n';
std::cout<<"copy Sales= "<<copy_totalSales<<"birr"<<'\n';
std::cout<<"Helper Inventory Value=" <<helper<<"birr"<<'\n';
return 0;
}  
