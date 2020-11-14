/*#include "iostream"
#include "iomanip"
#include "ctime"
#include "cstdlib"
#include "string"
#include"cmath"
#include"conio.h"
#include"cctype"
#include"cstring"*/
#include<bits/stdc++.h>
//#include<bits/algorithmfwd.h>

using namespace std;


#define ll long long
#define R int
#define J main()
#define ret return
#define PI 3.1415926536 //value of pi

#define ABS(a)  ((a)>=0?(a):(-a)) //Returns the absolute value of 'a'.

#define MIN(a,b)  ((a)<=(b)?(a):(b))  //Returns minimum value of 'a'.

#define MAX(a,b)  ((a)>=(b)?(a):(b))  //Returns the maximum value of 'a'.

#define CLS (cout<<"\033[2J") //Clears the screen.

#define LOCATE(r,c) (cout<<"\033["<<(r)<<'.'<<(c)<<'H')  //Positions the current curser to (row,column).

#define COLOR(f,b)  (cout<<"\033[1;3"<<(f)<<";4"<<(b)<<'m'<<flush)   //Sets the foreground and background color.
//Values of color for the macro 'COLOR'
#define BLACK       0
#define RED     1
#define GREEN       2
#define YELLOW          3
#define BLUE        4
#define MAGENTA     5
#define CYAN    6
#define WHITE   7

#define INVERS  (cout<<"\033[7m") //The following output is inverted.

#define NORMAL  (cout<<"\033[0m") //Sets the screen attributes on default values.
#define ESC 27  //ESC terminates the program.
#define isCtrl(c)   (c>=0&&c<=31&&c!='\n'&&c!='\t')
//Some c Macros.
#define isf(n) scanf("%d", &n)
#define ipf(n) printf("%d", (int) n)

#define lpf(n) printf("%lli", (long long)n)
#define lsf(n) scanf("%lli", &n)

#define pfn printf("\n")

#define max(a, b) a>b?a:b

#define SWAP(a, b, T) do{ T tmp = (a); (a) = (b); (b) = temp;}while(0)
string line(79, '-'); //Maybe it should've been first, but it still works.

void Header(){
  cout << line << '\n' << "			---***WELCOME TO THE PROGRAM!!***---\n" << line << '\n';
}

void GreetMe() {
    long sec;
	time(&sec);
	string time = ctime(&sec);
	//cout << time;
	cout << '\n' << left << time << "WELCOME @KIRA" << '\n';
   cout << line << '\n' << "			---***WELCOME TO THE PROGRAM!!***---\n" << line << '\n';
}

template <typename T>
 T sum(T a, T b)
{
  //int sum=*a + *b;
  return (a + b);
}

/*long sum(long a , long b) {
	return (a + b);
}*/


/*double sum(double *a, double *b)
{
  //float sum=*a + *b;
  return (*a + *b);
}*/

ll factorial(ll *a)
{ll fact=1;
  for(ll i=*a; i > 0 ; i--)
  {
    fact = fact * i;
  }
  return fact;
}

bool isPrime(int *a)
{ int count=0;
  for(int i=2;i<*a;i++)
  {
    if(*(a) % i == 0)  count++;
  }
  if(count>=1) return false;
  /*std::cout << "Composite number" << '\n';*/
  if(count==0) return true;
  /*std::cout << "Prime number" << '\n';*/
  return false;
}

template <typename T>
T sqr(T a)
{
    //float sqr= (*a) * (*a);
    return (a * a);
}

/*long square_of_int(int a)
{
    //int sqr=(*a) * (*a);
    return (a * a);
}*/

void multiplication_of_1d_array(int size, int *a, int *b, int *c)
{
    int i;
    for(i=0;i<size;i++,(*a)++,(*b)++,(*c)++)
    {
    *c = (*a) * (*b);
  }
}

template <typename T>
T reverse(T *a)
{
  T rem,sum=0,n=*a;
  for(;n>0;)
  {
    rem= (n) % 10;
     sum=sum*10;
    sum=sum+rem*10;
    n=n/10;
  }
  return (sum/10);
}

void reverseArray(int *a, ll n) {//Reverses your array
  for(ll i = 0; i < n - 1 - i; i++) {
    ll temp = *(a + i);
    *(a + i) = *(a + n - 1 -i);
    *(a + n - 1 - i) = temp;
  }
}

double sum_of_array_elements(ll *p, ll size)
{
  int sum=0;
  for(ll i=0;i<size;i++,(*p)++)
  {
    sum=sum+(*p);
  }
  return sum;
}

void heyCalculator()
{//pocket Calculator
  double num1,num2;
  std::cout << "Enter two numbers" << '\n';
  cout<<"1.Number1: ";
  std::cin >> num1;
  std::cout << "\n2.Number2: ";
  std::cin >> num2;
  chance:
  std::cout << "\nEnter an option from below" << '\n';
  cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division";
  int opt;
  double result;
  cin>>opt;
  switch (opt) {
    case 1://Addition
    result= num1 + num2;
    break;
    case 2://Subtraction
    result= num1 - num2;
    break;
    case 3://multiplication
    result=num1 * num2;
    break;
    case 4://division
    result=num1/num2;
    break;
    default : //still give him a chance
    goto chance;
    cout<<"invalid option man!!\n";
    break;
  }
  cout<<"\nANSWER= "<<setprecision(2)<<fixed<<result<<'\n'<<endl;
  cout<<"Do you wish to calculate again?"<<endl;
  char ans;
  cout<<"Enter y for yes and n for no"<<'\n';
  cin>>ans;
  if(ans=='y')
  heyCalculator();
  else
  cout<<"PEACE";
}

void outputRoots(double *a, double *b, double *c)
{//Returns the roots and tells the nature of roots
  double d=(*b)*(*b)-4*(*a)*(*c);
  if(d>0)
  {//two real roots
    double sqrtd=sqrt(d);
  cout<<"There are two real roots "
      <<(-(*b)+sqrtd)/(2*(*a))<<"and "
      <<(-(*b)-sqrtd)/(2*(*a))<<endl;
  }
  else if(d==0) //both roots are the same.
  cout<<"Theres only one distinct root that is, its a perfect square\n"
      <<-(*b)/(2*(*a))<<endl;
  else //complex conjugate roots.
  cout<<"The roots are complex"
      <<endl
      <<"The real part is "
      <<-(*b)/(2*(*a))  <<endl
      <<"The imaginary part is "
      <<sqrt(-d)/(2*(*a))<<endl;
}

template <typename T>
bool isPallindrome(T *a)
{
  T n = *a;
  if(reverse(&n) == (*a))	return true;
  //cout<<"\nThe given number is a pallindrome\n";
  else	return false;
  //cout<<"\nThe given number is not a pallindrome\n";
}

bool isVowel(char *ch)
{


  if(*ch=='a'||*ch=='e'||*ch=='i'||*ch=='o'||*ch=='u' || *ch == 'A' || *ch == 'E' || *ch == 'I' || *ch == 'O' || *ch == 'U')
  {
    //cout<<"The character is a vowel";
    //65, 69, 73, 79, 85 are vowels
    return true;
  }
  else
  {
    //cout<<"The character is a consonant";
    return false;
  }
}

template <typename T>
bool isPerfectSqr(T num)
{
  float n1;
  int n2;
  n1 = sqrt(num);
  n2 = sqrt(num);
  if(n1 == n2) return true;
  //cout<<"The number is a perfect square root of "<<n2<<endl;
  else return false;
  //cout<<"The number is not a perfect square"<<endl;
}

/*void remove_special_characters_from_my_string(char *c)
{
  for(int i=0;*c!='\0';*c++,i++)
  {
    if(!(*c>=65&&*c<=90) && !(*c>=97&&*c<=122) && !(*c='\0'))
        char *p;
    **p=*c;
    {for(int j=i;*c!='\0';j++,*p++)
    *c=(*c)+1;
  }
  *c='\0';
}
}*/

void remove_this_character_from_my_string(char *c, char *ch)
{
  for(int i=0;*c!='\0';i++,*c++)
  {
    if(*c==*ch)
    { for(int j=i;*c!='\0';j++)
      *c=(*c)+1;
    }
    *c='\0';
  }
}

int sum_of_characters_in_my_string(char *c)
{
  int sum=0;
  for(int i=0;*c!='\0';i++,*c++)
  {
      if((*c>=48&&*c<=57))
      {
          sum=sum+(*c-48);
      }
  }
  return sum;
}

void PANIC(void)//For friends hahahahhahahaha!!!
{
  for(int i=0;i<2;i++)
  cout<<'\a';
}

static string secret = "ISUS";  //Password TODO:MAKE USE OF THIS SOMEHOW!!!!!!!
static long maxcount = 3, maxtime = 60;    //Limits

/*long timediff() //returns the number of seconds after the last call
{
    long sec;    //time of the lat call
    long oldsec = sec;   //save the previous time.
    time(&sec); //Reads the new time
    return (sec - oldsec);  //Returns the time difference.
}*/

/*bool getPassword(string pass)  //Enters and checks passsword
{
    //Return value :True, if password is ok
    bool ok_flag = false;   //For return value
    string word;    //For input
    int count = 0, time = 0;
    timediff(); //To start the stopwatch
    while(ok_flag != true && ++count <= maxcount)
    {
        //Number of attempt
        cout<< "\n\nInput the password:";
        cin.sync(); //Clear the input buffer
        cin>>setw(20)>>word;
        if(time >= maxtime)   //within the limit?
            break;              //NO!
        if(word != pass)
            cout<< "Invalid password!" <<endl;
        else
            ok_flag = true; //Give permission.
    }
    return ok_flag; //result.
}*/


long strToLong(string str)
{
	//string to numbers.
    register int i = 0;   //index
    long vz = 1,num = 0;    //sign and number
    //Ignore leading white spaces
    for(i=0;i < str.size() && isspace(str[i]); ++i)
        ;
    //is there a sign?
    if(i < str.size())
    {
        if(str[i] == '+')   {vz = 1; ++i;}
        if(str[i] == '-')   {vz = -1; ++i;}
    }
    //sequence of digits -> convert to integer.
    for(;i < str.size() && isdigit(str[i]); ++i)
    num = num * 10 + (str[i] - '0');

    return (vz * num);
}

//account.h
/*#ifndef _ACCOUNT_
#define _ACCOUNT_
#inc
#endif // _ACCOUNT_*/

void printArray(int arr[], int count)
{
  //cout << "Values storred in array are:" << '\n';
  for(int i = 0; i < count; i++)
  cout << arr[i] << " ";

}

void primarySortAscending(int *arr, int size)
{
  for(int i = 0; i < size; i++)
  {
  for(int j = i + 1; j < size; j++)
  {
  if(arr[i] > arr[j])
    { int temp = *(arr + i);
      *(arr + i) = *(arr + j);
      *(arr + j) = temp;
    }
}
}
}

void primarySortDescending(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    for(int j = i + 1; j  < size; j++) {
      if (*(arr + i) < *(arr + j)) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
      }
    }
  }
}

void print_array_address(int arr[], int count)
{
  cout << "Values stored in array are:" <<'\n';
  for(int i =0; i < count; i++)
  cout << "Data:  " << arr[i] << " has Address: " << arr + i << '\n';
}

template <typename T>
void swap(T *a, T *b)
{
  T temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void swap(int *arr, int x, int y) //x and y, Must be index.
{
  int temp = *(arr + x);
  *(arr + x) = *(arr + y);
  *(arr + y) = temp;
}

long long fibonacciNumberFast(ll x) {
	long long a[x + 1];
	a[0] = 0; a[1] = 1;
	for(ll i = 2; i <= x; i++) {
		a[i] = a[i -1] + a[i - 2];
	}
	return a[x];
}

void permutation_of_array(int *arr, int i, int length)
{
  if(length == i)
   {
     printArray(arr, length);
     return;
   }
   int j;
   for (size_t j = i; j < length; j++) {
     swap(arr, i, j);
     permutation_of_array(arr, i+1, length);
     swap(arr, i, j);
   }
   return;
}


int contiguousSubarraySumMax(int a[], int size)  //Finds a subarray whose sum is maximum.
{
  int maxSoFar = 0, maxEndingHere = 0;
  for (int i = 0; i < size; i++) {
    maxEndingHere = maxEndingHere + a[i];
    if(maxEndingHere < 0)
      maxEndingHere = 0;
    if(maxSoFar < maxEndingHere)
      maxSoFar = maxEndingHere;
  }
  return maxSoFar;
}

ll GCD(ll m, ll n)//when you are sure that 1 and 0 are not the input
{
  if(m < n)
    return (GCD(n % m, m));
  if(m % n == 0)
    return (n);

  return (GCD(n, m % n));
}

long long EuclideanGCD(long long a, long long b) {//Perfectly coded with attention on edge cases
	if(a == 0) {
		return b;
	}
	else if(b == 0) {
		return a;
	}
	else if(a > b) {
		return EuclideanGCD(a % b, b);
	}
	else {
		return EuclideanGCD(a, b % a);
	}
	return 0;
}

void rank(int a[],int n, int r[]) {
  for (int i = 0; i < n; i++) {
    r[i] = 0;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if(a[j] <= a[i]) r[i]++;
      else r[j]++;
    }
  }
}

void insert_x_into_my_sorted_array(int *arr, int *size, int x) {
  //Assuming the array is > size.
  int i;
  for(i = 0; i < *size; i++) {
    *(arr + i + 1) = *(arr + i);

  *(arr + i + 1) = x;
  *size++; //one element added to arr.
  }
}


void insert_x_into_my_array_at_index(int *arr, int *size, int x, int value) {
  if(x > *size)
  return;
  else {
        int i;
    for( i = 0; i < x; i++) {
      *(arr + i + 1) = *(arr + i);
    }
    *(arr + i + 1) = value;
    *size++;
  }
}

bool isMultiple(long m, long n) {//Check whether m is multiple of n or not.
	for(long i = 2; i < n; i++) {
		if((i * m ) == n)
		return true;
	}
	return false;
}

long sumUpto(long m) {
	long sum = 0;
	for(long i = 0; i <= m; i++) {
		sum += i;
	}
	return sum;
}

void Hacker() { 	//Just for fun.
	long sec;
	time(&sec);
	srand(sec);
	//i = rand() % 10;
	while(true) {
		//cout << rand() % 10 << "\t" << rand() % 10 << "\t" << rand() % 10 << "\n";
		for(int i = 0; i < 10; i++) {
			cout << rand() % 10 << "\t";
		}
		cout << "\n";
	}
}

//void binarySearch(int *arr, int n) {
//Please complete this.

long Sum_Of_Smaller_Number(int i) {
	long sum = 0;
	for(int j = 1; j <= i; j++) {
		sum += j;
	}
	return sum;
}

long Return_Sum_Of_Odd_Integers_Smaller_Than(int a) {
	int sum = 0;
	for(int i = 1; i <=  a; i++) {
		if(i % 2 != 0) {
			sum += i;
		}
	}
	return sum;
}

int Number_Of_Times_We_Can_Divide_Number_By_Two(long a) {
	int count = 0;
	for(int i = 0; i > 0; i = i / 2) {
		if(i % 2 == 0) {
			count++;
		}
	}
	return count;
}

void insertionSort(int *a, int n) {
	//a is the array and n is the size of the array.
	for(int i = 1; i < n; i++) {
		int j = i - 1;
		int key = *(a + i);
		while(i > 0 && *(a + j) > key) {
			*(a + j + 1) = *(a + j);
			i--;
		}
		*(a + j + 1) = key;
	}
}

template <typename T>
T sqrSum(T a, T b) {
	return (a * a + b * b);
}

class Complex {
	float real, imag;
	public:
	Complex() {
		real = 0; imag = 0;
	}
	Complex(float a, float b) {
		real = a;	imag = b;
	}
	Complex(float a) {
		real = imag = a;
	}
	~Complex() {}
	void display() {
		cout << real << ' ' << "+" << " " << imag << 'j' << '\n';
	}
	friend Complex resultant(Complex c1, Complex c2);
	float magnitude() {
		return (sqrSum(this->real, this->imag));
	}
	void scanComplexNumber() {
		cout << "real = ";
		cin >> real;
		cout << "imaginary = ";
		cin >> imag;
	}
	float CRad() {
		ret (sqrt(sqrSum(this->real, this->imag)));
	}

};

Complex resultant(Complex c1, Complex c2) {
	Complex c;
	c.real = c1.real + c2.real;
	c.imag = c1.imag + c2.imag;
	return c;
}

template <typename T>
void scanMatrix(T *a[], ll n) {
	for(ll i = 0; i < n; i++) {
		for(ll j = 0; j < n; j++) {
			cin >> *(*(a + i) + j);
		}
	}
}

template <typename T>
void scanArray(T *a, ll n) {
	for(ll i = 0; i < n; i++) {
		cin >> *(a + i);
	}
}

long long MaxWiseProductFast(const vector<int> &a) {
	int index_first = -1;
	for(int i = 0; i < a.size(); i++) {
		if(index_first == -1 || a[index_first] < a[i]) {
			index_first = i;
		}
	}
	int index_second = -1;
	
	for(int i = 0; i < a.size(); i++) {
		if((i != index_first) && ((index_second == -1) || a[i] > a[index_second]))  {
			index_second = i;
		}
	}
	cout << index_first << " " << index_second << '\n';
	return ((long long)a[index_first] * a[index_second]);
}

template <typename T>
T rand(T a, T b) {
	return (a + rand() % (b + a -1));
}

struct Node {
	int data;
	Node* next;
};

class LinkedList {
	private:
	Node* head, *tail;
	public:
	LinkedList() {
		head = NULL;
		tail = NULL;
	}
	
	~LinkedList();
	
	void addNode(int n) {
		Node* temp = new Node();
		temp -> data = n;
		temp -> next = NULL;
		if(head == NULL) {
			head = temp;
			tail = temp;
		}
		else {
			tail -> next = temp;
			tail = tail -> next;
		}
	}
	
	int countOfList() {
		Node* current = new Node();
		current = head;
		int count = 0;
		while(current != head) {
			count++;
			current = current -> next;
		}
		return count;
	}//Time Complexity - O(n) and Space Complexity - O(1)
	
	void print() {
		Node* current = new Node();
		current = head;
		while(current != NULL) {
			cout << current -> data << " ";
			current = current -> next;
		}
	}//Time Complexity - O(n)
	
	void Inset(int data, int position) {
		if(position == 0) {
			return;
		}
		int k = 1;
		Node* p, *q;
		Node* newNode = new Node();
		if(!newNode) {
			cout << "Memory Error" << '\n';
			return;
		}
		newNode -> data = data;
		p = head;
		if(position == 1) {
			newNode -> next = p;
			head = newNode;
		}
		else {
			//Traverse the list until the position where we want to insert
			while(p != NULL && k < position) {
				k++;
				q = p;
				p = p -> next;
			}
			q -> next = newNode;
			newNode -> next = p;
		}
	}//Time Complexity - O(n) and Space Complexity - O(1);

	void Delete(int position) {
		int k = 1;
		Node* p, *q;
		if(head == NULL) {
			cout << "List Empty";
			return;
		}
		p = head;
		if(position == 1) {
			head = (head) -> next;
			delete p;
			return;
		}
		else {
			while(p != NULL && k < position) {
				k++;
				q = p;
				p = p -> next;
			}
			if(p == NULL) {
				cout << "Position dne" << '\n';
			}
			else {
				q -> next = p -> next;
				delete p;
			}
		}
	}//Time complexity - O(N) and Space Complexity - O(1).
};

struct DLNode {
	int data;
	DLNode* next;
	DLNode* prev;
};


class Stack {
	private:
	int index;
	int arr[20];
	public:
	Stack() {
		index = -1;
		for(int i = 0; i < 20; i++) {
			arr[i] = 0;
		}
	}

	bool isEmpty() {
		if(index == -1) {
			return true;
		}
		else return false;
	}

	bool isFull() {
		if(index == 19) return true;
		else return false;
	}

	void push(int n) {
		if(isFull()) {
			cout << "Overflow" << '\n';
			return;
		}
		index++;
		arr[index] = n;
	}

	int pop() {
		if(isEmpty())
			return -1;
		int popval = arr[index];
		arr[index] = 0;
		return popval;
	}

	int count() {
		return index + 1;
	}

	int peek(int pos) {
		if(isEmpty()) {
			cout << "underflow" << '\n';
			return -1;
		}
		return arr[pos];
	}

	void change(int pos, int val) {
		if(isEmpty()) {
			cout << "No values added yet" << '\n';
			return;
		}
		arr[pos] = val;
	}

	void display() {
		for(int i = 0; i <= index; i++) {
			cout << arr[i] << " ";
		}
		cout << '\n';
	}

	int limit() {
		return 19;
	}
};

bool binarySearch(int *arr, int n, int value) {
	int max = n - 1;
	int min = 0;
	int mid;
	while(max >= min) {
		mid = (max + min) / 2;
		if(*(arr + mid) == value) {
			return true;
		}
		else if(*(arr + mid) > value) {
			max = mid - 1;
		}
		else {
			min = mid + 1;
		}
	}
	return false;
}

/*
int binarySearch(int *arr, int n, int value) {
	int high = n - 1;
	int low = 0;
	int mid;
	while(low <= high) {
		mid = (high + low) / 2;
		if(*(arr + mid) == value) {
			return (arr + mid);
		}
		else if(*(arr + mid) > value) {
			high = mid - 1;
		}
		else {
			low = mid - 1;
		}
	}
	return -1;
}
*/

int MIN_CAPACITY = 2;

template <class T>
class Array {
	private:
	size_t size;
	size_t cnt;
	T* data;
	resize() {
		T *p = new T[size + 20];
		for(size_t i = 0; i < size; i++)
			p[i] = data[i];
		delete [] data;
		data = p;
		size += 20;
	}
	public:
	Array() {
		size = 2;
		cnt = 0;
		data = new T[size * sizeof(*data)];
		if(!data) {
			throw bad_alloc();
		}
	}

	~Array() {
		free(data);
	}

	void push(T value) {
		if(cnt >= size) {
			resize();
		}
		*(data + cnt++) = value;
	}

	T pop() {
	return *(data + --cnt);
	}

	void set(size_t index, T value) {
		while(index >= cnt)
		this -> push(0);
		*(data + index) = value;
	}

	T get(size_t index) {
		return *(data + index);
	}

	void print() {
		for(size_t i = 0; i < cnt; i++) {
			cout << setw(5) << *(data + i);
		}
		cout << '\n';
	}

	bool isEmpty() {
		if(cnt == 0)
		return true;
		return false;
	}

	size_t capacity() {
		return size;
	}

	size_t count() {
		return cnt;
	}

	
};

/*template <class T>
class Array1 {
	*/



int* splice(int *a, int n, int *b, int m, int pos) {
	if(pos < 0 || pos > n) {
		return NULL;
	}
	int i = 0, i1 = 0, i2 = 0;
	int *v = new int[n + m];
	for( i = 0, i1 = 0; i1 < pos; i++, i1++) {
		v[i] = *(a + i1);
	}

	for(i2 = 0; i2 < m; i++) {
		v[i] = *(b + i2);
	}

	for(; i1 < n; i++, i1++) {
		v[i] = *(a + i1);
	}
	return v;
}
