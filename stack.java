//Stack Implementation
class main{
	public static void main(String[] arg) {
		stack st = new stack(5);
		st.push(1); 
    st.push(3);
    st.push(1); 
    st.push(3); 
    st.push(1); 
    st.push(3);
    
		st.pop();
    
		System.out.println(st.isFull());
    System.out.println(st.isEmpty());
    System.out.println(st.toString());
	}
}

class stack{
	int cap = 10;
	Object a[];
	int size;
	
	stack(){
		a = new Object[cap];
		size=0;
	}
	stack(int cap){
		this.cap=cap;
		a = new Object[cap];
		size=0;
	}
	
	public void push(Object data) {
		if(isFull()) {
			System.out.print("Stack OverFlow!!");
			//throw new IndexOutOfBoundsException("Stack Overflow!!");
		}
		a[size++] = data;
	}
	public Object pop() {
		if(isEmpty()) {
			System.out.println("Stsck UnderFlow!!");
			return "Stsck UnderFlow!!";
		}
		return a[size--];
	}
	public Object peek() {
		return a[size];
	}
	public boolean isEmpty() {
		return size==0;
	}
	public boolean isFull() {
		return size==cap;
	}
	
	public String toString() {
		String s="";
		for(int i=0;i<size;i++) {
			s+=a[i]+", ";
		}
		if(s != "") {
			s = "["+s.substring(0,s.length()-2)+"]";
		}
		else s = "[]";
		return s;
	}
}
