# Data-Structure
Data Structure container


# Data-Structure
Data Structure container
01. 배열과 링크드 리스트

배열
같은 타입의 요소들이 일련으로 순서화 되어있다.
index에 의해 각각의 요소들이 참조되고
특정한 순서로 무언가를 저장하는 것에 좋다
다만 크기가 고정되어 있는 것은 단점, 삽입과 제거시 많은 코스트 사용도 단점
장점은 접근 속도가 빠르고 일정

배열 insert
오른쪽으로 민 다음, 빈 곳에 삽입
-cost는 배열 안에 있는 요소만큼
배열 remove
지우려는 요소가 담긴 칸부터 한 칸씩 당긴다
--insert와 같이 배열 안에 있는 요소만큼

<img width="296" alt="image" src="https://user-images.githubusercontent.com/102133961/174471111-902a1778-7cec-4e4c-b377-d89183b43fe9.png">
<img width="279" alt="image" src="https://user-images.githubusercontent.com/102133961/174471114-b82dcac5-a28f-48af-bf39-7620dc368782.png">
<img width="279" alt="image" src="https://user-images.githubusercontent.com/102133961/174471118-f7c59c4e-9169-4c60-90d1-b344d2ad2868.png">
<img width="279" alt="image" src="https://user-images.githubusercontent.com/102133961/174471120-c6a3d8c4-1b29-4719-9bb1-76d39b49d3ea.png">

*동적인 배열로는 vector가 있다

singly 링크드 리스트
일련의 노드들을 포함하고 있는 데이터 구조
각각의 노드는 element와 다음 노드를 가리키는 포인터로 이루어졌다
처음 노드와 마지막 노드를 가리키는 head와 tail 존재
tail->next = null
장점 연결리스트는 크기가 자유롭다(그냥 추가하면 됨)
단점 요소에 접근하기 위해서 순차적으로 접근해야 함

inserting at the head
addfront(element)함수 이용
새로운 노드 할당
linked list가 비어있으면 그냥 head연결
비어있지 않다면 
newnode->next = head
head = newnode;

cost: O(1) constant time

Removing at the head
removeFront()
head를 다음 노드로 이동
delete 이전 노드
cost: O(1) constant time

Inserting at the Tail
addTail(element)
새로운 노드 할당
tail의 next를 새로운 노드
tail을 새로운 노드로
cost: O(1) constant time 

Removing at the Tail
removeTail()
효율적이진 않다
cost가 요소의 개수만큼 든다
노드를 가리킬 새로운 포인터를 생성 후 그 포인터를 tail전까지(next가 null이 아닐때까지) 이동
tail은 자기 자신 가리키고 이전 tail 삭제
자신의 next는 null을 가리키도록
![image](https://user-images.githubusercontent.com/102133961/174471126-bf690555-55e0-41e2-b09c-df3ff5fe19a1.png)
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471132-1782b694-cf55-4429-88d9-027133edf452.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471134-3e340dd0-63a8-4544-ba63-6fd3afa75a4b.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471139-b59c67ad-6160-4cd2-8842-325df9353154.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471143-8db09080-56f7-4e47-ba2f-b72ffaf403f9.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471147-c191abdb-45fd-4988-b8f0-482fffc48f92.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471151-d3f008df-8773-4e5b-b00c-165b952d4757.png">
<img width="451" alt="image" src="https://user-images.githubusercontent.com/102133961/174471154-c0dcca5c-c4db-457c-84da-3fd5fe6cbab0.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471155-051b1760-eb3e-4ee0-94cb-f2eed983365c.png">
Doubly LInked List
List ADT에 관한 더 일반적인 설명을 제공한다
element
이전 노드를 가리키는 prev
다음 노드를 가리키는 next 포인터
빈 노드이고 맨 앞을 나타내는 header
마찬가지로 빈 노드이고 맨 뒤를 나타내는 trailer
 

기본적인 operation 두 개로 시작
add(p, element), remove(p)

이녀석들로 

addFront() addTail() removeFront() removeTail() 전부 만들 수 있다

Insertion
add(p, element)
p가 가리키는 곳에 x 를 담은 노드 넣기
포인터 p를 삭제하려는 위치까지 이동
p 이전에 
newnode->prev = p->prev
p->prev->next = newnode

p->prev = newnode
newnode->next = p

Insertion Algorithm

Algorithm add(p, e)
Create a new node v
v->element = e
u = p->prev
v-next = p; p->prev = v
v->prev = u; u->next = v

cost: O(1) constant time


Deletion
remove(p)
p 빼고 이으면 됨

Algorithm remove(p):
u = p->prev
w = p->next
u->next = w
w->prev = u

cost: O(1) constant time

Extension to other operations

addFront(int e){
add(header->next, e)
}

addTail(int e){
add(tailer->prev, e)
}

removeFront(){
remove(header->next)
}

removeTail(){
remove(tailer->prev)
}

List ADT
추상 데이터 타입
간략한 설명
Generic methods
Iterators
Update methods
Iterator-based update
등의 설명으로 구성


Iterators
list 요소들 사이를 순회하는 객체

for(p=C.begin(); p != C.end(); P = C.next())

Implementing Iterators

Array
n개의 요소로 구성된 array
index i가 커서 역할을 함
begin() = 0
end() = n
next() = i+1

LInked List
현재 element를 포함하고 있는 노드를 가리키는 포인터가 커서
begin() = head
end() = null
next() = 현재 노드의 next 노드를 가리키는 포인터


	


VECTOR

vector ADT
벡터는 배열의 확장 개념
배열+여러 함수 = 클래스화 = 벡터
공통점: 인덱스를 통해 데이터에 접근 가능
차이점: 사이즈가 부족하면 더 큰 배열을 할당받아 크기를 늘릴 수 있다

메인 기능:탐색(at) 삽입(Insert) 삭제(erase) 갱신(set)
at(i) - i번 인덱스 데이터 값 리턴
insert(i, o) - i번 인덱스에 값 o를 갖는 셀 추가, 기존 셀 한칸씩 뒤로
erase(i) - i번 인덱스 삭제, 기존 셀 한칸씩 앞으로
set(i, o)- i번 인덱스 값 o로 갱신
reserve(n) 벡터에서 n개의 자리를 확보하는 함수

부가기능: size empty
size()  셀 개수 리턴
empty() 해당 벡터 비었는지 boolean리턴

성능분석:
at,set,size,empty -> O(1)
insert, delete -> i=0이면 전부다 밀거나, 전부다 당겨야 해서 최악 O(n) 걸림


O(1) < O(log n) < O(n) < O(nlogn) < O(n^2) < O(n^3) < O(2^n)cAivov

더 큰 배열을 할당받아 저장소로 사용하는 벡터
방법1. 일정 크기만 늘어남 (incremental strategy)
O(n)
방법2. 기존 크기의 두배가 늘어나게 할당(doubling strategy)
O(1)
-당연히 새로운 배열이라 할당받은 배열의 주소는 기존 배열 주소와 다름
![image](https://user-images.githubusercontent.com/102133961/174471164-d79e6a7c-097b-4b25-9f23-479642e7c9a9.png)
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471168-bc26d81c-0ffa-4ef1-82e3-3b319bde7420.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471171-2addaeb5-f20d-4fae-b9ba-ff368b62fdfc.png">
const int& e는 insert함수 내부에서 참조자를 이용한 값 변경이 일어나지 않을 것을 의미
즉 e가 변화되지 않을 것이다
![image](https://user-images.githubusercontent.com/102133961/174471173-14b42af2-66f3-4ed2-8089-1d58810f8ae6.png)
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471174-1615ada8-38e5-4c8c-ae09-98bff8697df2.png">
Position,List

position ADT
자료구조의 주소를 모델링한 개념
링크드 리스트에서는 index가 없으므로 node로 접근하는 것이 이상적
리스트 내에서 위치를 추상화한 데이터 타입
유일한 메소드 element()를 통해 주어진 위치에 해당하는 값을 리턴
연산자 오버로딩을 통해 (* 연산자) 값을 리턴할 수도 있다

List
배열의 확장이 벡터이듯, doubly linked list의 확장이 리스트이다

Iterator
반복자
리스트에서 가장 중요한 개념
원소의 position리턴해서 포인터와 동일한 역할
반복자는 컨테이너에 저장된 원소에 접근하는 도구
반복자는 begin() end() 함수를 통해 초기화
end()가 이땐 trailer 가리킴(주의)
begin은 header의 다음 노드 가리키면서 end는 왜 trailer 가리키냐라고 하면
[begin, end) 이 구조 알지? 한쪽만 열린 구조, 비긴 초과 end 이하

List ADT
리스트는 포지션을 데이터로 하는 자료구조, 일반적으로 doubly linked list로 구현
begin end - 시작 노드 header 의 다음노드와 trailer의 주소 리턴
insertFront insertBack eraseFront eraseBack 일반적인 삽입 삭제
insert(p,e) erase(p) iterator로 리턴 받은 주소를 이용해 삽입 삭제

원래 우리가 doublt linked list 할때는 curNode와 pre를 움직여가며 위치를 찾았다
기억나나 (cur = cur ->next)
<insert>
이젠 새로운 노드 q를 생성하고 주어진 p를 기준으로
q->next = p; q->prev = p->prev;
새로운 q를 p와 p 이전 노드와 연결
p->prev->next = q; p->prev = q;
이번에는 p 쪽에서 연결

<delete>
p.prev.next = p.next;
p.next.prev = p.prev;
delete p;
p고립시켜서 끊어버리기
일반적인 doubly linked list의 삽입 삭제와 달리
position p를 통해 테이터에 접근하므로 O(1)시간 동안 수행
반복자를 이동시키는 과정은 따로 하므로 그거 제외

Sequence ADT
인덱스와 포지션 둘 다 사용 가능한 자료구조
시퀀스는 데이터를 일렬로 정렬하는 자료구조 끝판왕
이 시퀀스를 이용해 stack queue vector list 모두 구현 가능
indexOf(p) 포지션에 해당하는 인덱스 값 반환
atIndex(i) 인덱스에 해당하는 포지션 값 반환
(인덱스와 position을 연결하는 브리징 메소드-함수 들)

구현
원형 배열로 구현
배열의 원소로 index와 position 모두 갖는다h
-> erase 와 insert 수행할 때 인덱스 모두 수정해야 함 O(n)

더블리 링크드 리스트 구현
배열의 원소로 position 갖고 index는 앞에 몇 개의 원소가 있는지로 판별
->bridge funciton 수행 시 하나하나 조사 필요 O(n) 최악의 경우

어떻게 이게 가능하냐?
position을 사용하는 함수와 index와 position을 반환하는 함수가 같이 있어서
![image](https://user-images.githubusercontent.com/102133961/174471177-98170391-48a8-4d96-a27c-399b57a8c151.png)
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471185-209cf560-b460-4273-8dd6-6afc9d7c7387.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471197-fa7b39c5-8c0f-4262-a54e-28f4570a336c.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471203-c13e5983-afd6-4e62-8206-ae4bacf0501b.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471204-4940ff4d-a4c7-400f-ac1a-acb2cd7cf8bb.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471206-2921927a-b0b1-4c05-af88-b7c1047245d4.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471211-38745a10-ae3b-43d7-a9ef-440c96637ced.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471225-419cb670-153d-461c-8af2-374703aa831d.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471229-3f1e3dc4-2223-4078-b2d5-93fc5e6bb053.png">
<img width="155" alt="image" src="https://user-images.githubusercontent.com/102133961/174471232-7120aacb-e986-49ab-8c12-8285d10a0aeb.png">
Algorithms Analysis

대부분의 알고리즘은 input objects를 output objects로 바꾼다
running time은 input size가 커질수록 커진다(일반적으로)
이때 평균 시간을 측정하기가 어려운데, 그래서 우리는 최악의 running time을 고려한다
worst running time 은 분석하기가 쉽고, 치명적이다(게임이나 금융이나 로봇공학에서)

Experimental studies
알고리즘을 실행하는 프로그램을 작성
input의 사이즈와 구성을 다르게 하여 프로그램 구동
clock() 함수를 사용해서 정확한 running time을 측정
결과를 정리

Limitations of Experiments
알고리즘을 (완벽하게)실행할 필요가 있는데 매우 어렵다
결과가 실험에 포함되지 않은 다른 input의 running time을 가리키지 않을 수 있다(모든 사이즈에 대한 실험이 아니므로)
두개의 알고리즘을 비교하기 위해선 같은 하드웨어와 소프트웨어를 갖춰야 하지만 이것이 매우 어렵다

Theoretical Analysis
high-level description을 사용해라(코드)
input size n을 이용한 함수로 running time을 특징지어라
모든 가능한 Input을 고려해라
하드웨어와 소프트웨어 환경과 독립적인 알고리즘의 속도를 계산할 수 있도록 해라

Pseudocode
알고리즘의 high-level description
영어 산문보다 더 체계적이다
프로그램보다 덜 세세함
알고리즘을 설명하는 선호되는 notation
프로그램 설계 문제를 숨긴다

The RAM MODEL
CPU
잠재적인 무한한 메모리 cell들(임의적인 숫자나 문자를 붙잡을 수 있는)의 뱅크
메모리 셀들이 숫자가 메겨지거나 메모리에 있는 cell에 접근하는 것은 단위 시간이 걸린다(일정한 시간이 걸린다)

Primitive Operations
알고리즘에 의해 수행되는 기초적인 계산들
pseudocode에서 식별가능
정확한 정의가 중요하지 않다
RAM모델에서는 constant time으로 추정한다
각각의 operation( +  *  -  =  if  call)이 정확히 단일 시간
예시) 계산 표현
      변수에 값 할당
      배열에 indexing
      비교연산자
      함수 호출
      함수 실행
      메소드 리턴

counting primitive operations
pseudocode를 조사함으로써 우리는 알고리즘에 의해 실행되는 primitive operations의 최대 숫자를 input size(n)에 대한 함수로 나타낼 수 있다

Estimating Running Time
arryMax
![image](https://user-images.githubusercontent.com/102133961/174471240-4562c14c-353c-4c16-b897-6ac027fbd283.png)
Estimating Running Time
Algorithm arrayMax는 worst case가 8n-3만큼 나온다
만약 a가 primitive operation중에서도( 아무리 시간이 동일하다고 하더라도) 가장 빠른거
b가 primitive operation중에서 가장 느린거라고 하면
arrayMax의 worst case time T(n)은
a(8n-3) <= T(n) <= b(8n-3)
T(n)은 두개의 선형 함수에 둘러싸였다

여기서 8n-3 과 5n 중 누가 빠르냐는 모든 primitive operation이 실제로 가동 시간이 같지 않기에 명확하게 알 수 없다
그래서 이때 사용하는 것이 BIg-Oh notation이다

Big-Oh Notation
함수 f(n) 과 g(n)이 주어졌을때
f(n) = O(g(n))
양의 상수인 c와 n0가 있다면
f(n) <= cg(n) for n>= n0


O(1) O(log n) O(n) O(nlogn) O(n^2) O(n^3) O(2^n)
이 순서 기억!
뒤로 갈수록 n이 커질수록 급증한다


Growth Rate of Running Time
하드웨어와 소프트웨어 환경을 바꾼다
최악의 time T(n)은 constant factor에 의해 영향을 받지만 이것이 T(n)의 성장 비율을 바꾸지 않는다
running time의 선형 성장 비율 T(n)은 arrayMax 알고리즘의 본질적인 특성이다 

Constant Factors
성장 비율은 (growth rate)
constant factor
lower-oreder terms (하위항)
에 영향을 받지 않는다

Big-Oh and Growrg Rate
Big-Oh notation은 함수의 성장 비율에 대한 상한 경계를 준다
f(n) is O(g(n))의 의미는 f(n)의 성장비율이 g(n)의 성장비율보다 크지 않다는 것을 의미한다
우리는 Big-Oh notation을 그들의 성장 비율에 따라 기록할 때 사용할 수 있다

Big-Oh rules
f(n)이 d의 다항식이면 O(n^d)이다
-하위항들을 버리고
-상수항도 버려라

가능한 가장 작은 함수를 사용해라
가장 간단한 표현을 사용해라

Asymptotic Algorithm Analysis
점근 알고리즘 분석

점근 알고리즘 분석은 big-Oh notation에서 running time을 정한다
점근 분석을 수행하기 위해
-primitive operation중 worst case number를 찾아야 한다(n에 대한 함수로 나타냄)
이 함수를 big-Oh 로 나타낸다

결국 하위항과 상수항은 버려지므로 primitive operation을 셀 때 애초에 버려도 된다


Big-Oh 사촌들
big-Omega
c>0, n_0>1일때 f(n) >= cg(n), n>=n_0이면 f(n)은 (g(n)

big-Theta
c'>0, c''>0, n_0>1일때 c'g(n) <= f(n) <= c''g(n), n>= n_0 이면
f(n) 은 (g(n))

Intuition for asymptotic notation
big-oh
f<=g
big-omega
f>=g
big-theta
f==g



STACK

Abstract data types
data structure의 abstraction이다
how 어떻게가 아닌 what 무엇이 있는가가 주제
상세한 설명은 생략
저장되는 data
데이터의operations
![image](https://user-images.githubusercontent.com/102133961/174471250-bae386b3-b99a-41e9-acf2-3f2d3cf8e2be.png)

	stack interface in c++

template<typename E>
class Stack {

public:
  int size() const;
  bool empty() const;
  const E& top() const
         throw(StackEmpty);
  void puch(const E& e);
  void pop() throw(StackEmpty);
}

Exception
ADT의 operation을 실행시키면 때때로 exception이라고 불리는 error condition 일어날 수 있다
exception은 실행될 수 없는 operation에 의해 thrown된다고 불려진다
stack ADT에서 pop() 이나 top() operation은 스택이 비어있을 때 실행될 수 없다
pop() 이나 top() 오퍼레이션을 스택이 비어있을 때 실행하면 StackEmpty 예외가 던져진다


Applications of stacks
웹브라우저의 페이지 방문 기록
텍스트 에디터의 뒤로가기
c++ 런타임 시스템에서 사용되는 함수 호출 체인

indirect application
알고리즘의 보조 데이터 구조
다른 데이터 구조의 구성요소

C++ Run-Time stack
c++ 런타임 시스템은 활성화된 함수의 체인을 스택에 유지한다
함수가 호출되면 시스템이 스택에 frame containing을 밀어넣는다
  -로컬 변수와 리턴 값
  -program counter: 실행되고 있는 (함수)트랙의 상태를 유지
함수가 끝나면 그것의 frame은 스택에서 pop된다 그리고 control이 스택의 맨 위에 위치한 함수로 이동된다
재귀에서 쓰인다

Array-based stack
stack ADT를 실행하는 간단한 방법 중 하나는 배열을 사용하는 것이다
element를 왼쪽에서 오른쪽으로 더한다
한 변수가 top element의 index의 트랙을 유지한다
elements를 저장하는 stack이 아마 꽉 찰 수도 있다
push operation은 이럴 경우에 StackFull 예외를 던진다
 - 배열 기반이기에 생긴 한계
 - Stack ADT의 본질적 특성이 아니다 

Algorithm size()
 return t+1 //t는 가장 나중에 들어간 element 인덱스

Algorithm pop()
 if empty() then
     throw StackEmpty
    else
     t<-t-1
     return S[t+1]

Algorithm push(o)
  if t=S.size()-1 then
     thrown StackFull
    else
     t<-t+1
     S[t]<-o

Performance and Limitations

performance
 스택에 있는 elements의 수를 n개라고 하자
 space cost: O(미리 정의된 최대 스택의 크기)
 time cost: 각각의 operation들이 O(1)동안 작동
          처음 메모리 할당 시엔 O(n)만틈 작동

Limitation
  스택의 최대 사이즈는 미리 정의되어야 하고 바뀔 수 없다
  꽉 찬 스택에 새로운 element를 밀어넣으면 implementation-specifc exception을 일으킬 수 있다
![image](https://user-images.githubusercontent.com/102133961/174471265-e7506520-c509-4226-a223-a4ccb3d87c54.png)

	     <img width="372" alt="image" src="https://user-images.githubusercontent.com/102133961/174471275-59961109-ed24-4d32-84fe-f9a5daa9b457.png">


<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471306-2d0579ec-120f-4c70-8186-e8d3b6b195f6.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471311-6e209624-2a95-430d-9e99-9a3c0b242a19.png">

Parentheses Matching

각각의 괄호들은 모두 나머지 반 쪽과 매치가 되어야 한다

Parentheses Matching Algorithm

Algorithm ParenMatch(X, n):
Input: n개의 토큰을 가진 하나의 배열 X를 입력, 각각의 토큰이 groupting symbol, variable, arithmetic operator, number이다
Output: X배열 안에 있는 모든 grouping symbol이 match면 true

S가 빈 stack이 되도록 한다
for i=0 to n-1 do
  if X[i] 열려있는 (한쪽 밖에 없는) symbol이라면 then
     S.push(X[i])
else if X[i]가 닫힐 차례인 grouping symbol 이라면 then
    if S.empty() then
       return false {nothing to match with} // 닫힐 차례인데 비었다면 match할 것이 없다!
    if S.pop()이 X[i]의 type과 맞지 않는다면 then
        return false{wrong type}

if S.empty() then
       return true{every symbol matched}
     else return false {some symbols were never matched}

Evaluating Arithmetic Expressions

operator precedence
* 가 + 그리고 - 보다 우선순위가 높다
associativity
   같은 우선순위의 operators들은 왼쪽에서 오른쪽으로 계산된다
idea
각각의 operator들을 스택에 push 하는데, 처음으로 더 우선순위가 높거나 같은 operations이 나타나면 pop한다


Algorithm for Evaluating Expressions
two stacks:
opStk는 operators를 저장
valStk는 값을 저장(숫자)
end of input을 표시하기 위해 $를 최저 precedence로 사용

Algorithm doOp()
  x<-valStk.pop();
  y<-valStk.pop();
  op <- opStk.pop();
  valStk.push(y op x);
Algorithm repeatOps( refOp):
while( valStk.size() > 1 ^
       prec(refOp) <= prec(opStk.top())
doOp()


Algorithm EvalExp()
   input: 산술 표현을 나타내는 토큰들의 stream
   output: expression의 값

while there's another token z
  if isNumber(z) then 
      valStk.push(z)
  else
      repeatOps(z);
      opStk.push(z)
repeatOps($);
return valStk.top()
![image](https://user-images.githubusercontent.com/102133961/174471322-2ec4481e-652d-467d-9280-6f70a5f010e9.png)

<img width="214" alt="image" src="https://user-images.githubusercontent.com/102133961/174471328-8db33354-a01c-40f1-ac0b-bdf2f5518e8a.png">

	       중위 표기법
연산자를 두 숫자(피연산자) 사이에 쓴다
후위표기법
연산자를 피연산자 뒤에 쓴다
->스택을 두개 만들 필요 없이 순서대로 처리 가능!

중위->후위로 바꾸는 절차
연산자 담을 스택을 준비
연산자를 만나면 스택이 비어있을 경우 연산자 Push
스택의 탑에 있는 연산자가 현재 들어가려는 연산자보다 우선 순위가 같거나 높으면 pop, 낮으면 그대로 들어가려는 연산자 push
여기서 pop된 연산자는 숫자 두 개 뒤에 붙는다
스택에 남아있는 연산자 pop

중위->후위->후위 연산

피연산자를 만나면 스택에 push
연산자를 만나면 필요한 만큼의 숫자를 스택에서 pop하여 연산자와 계산, 결과를 다시 스택에 push
수식이 끝나면 마지막 결과를 Pop하여 스택에서 출력


stack as a llinked list

우리는 스택을 singly linked lilst로 설명할 수 있다
top element가 리스트의 첫번째 노드에 저장된다
space cost: O(n)
time cost: O(1)

Q. 싱글리 링크드리스트에서 top으로 head를 쓰는 이유? A. 마지막 원소를 삭제시키는 pop을 비교하자. head를 top으로 두는경우, 1. Node* tmp = head; 2. head → next = head; 3. size =- 1; 4. delete tmp; 를 해주면 되지만, tail을 top으로 두는 경우 1. Node* tmp = tail; 2. for문으로 tail 이전 node 찾아서 tail 할당 3. size —; 4. delete tmp; 의 과정을 해줘야 한다. 이때 tail 이전의 node를 찾기까지 O(n)번 수행되므로, tail을 top으로 두는 것은 head를 top으로 두는것보다 비효율적이다. cf. delete tmp로 기존 head, tail의 주소가 해제됨
![image](https://user-images.githubusercontent.com/102133961/174471334-4dfda7c8-a4b0-4903-a4e6-24f0b2906cd1.png)

<img width="212" alt="image" src="https://user-images.githubusercontent.com/102133961/174471338-e58c15b8-299a-4995-a06c-08fe0b495adf.png">

<img width="325" alt="image" src="https://user-images.githubusercontent.com/102133961/174471340-4e5edd0f-1420-407e-8607-f8563c067064.png">
<img width="451" alt="image" src="https://user-images.githubusercontent.com/102133961/174471342-7c421c72-1bcf-4714-9f00-6333775a39b3.png">

	       Queues

Queue ADT
queue는 임의의 객체들을 저장한다
insertion과 deletion은 FIFO(first in first out)구조를 따른다
insertion은 queue의 rear에서 진행되고
removal은 queue의 front에서 진행된다

Main queue operation
enqueue(object) 
queue의 끝(rear)에 element 를 insert한다

dequeue()
큐의 맨 앞에서 요소를 제거

Auxiliary queue operations
object front()
큐 맨 앞에 있는 요소를 제거하지 않고 리턴

integer size()
저장된 요소들의 개수를 리턴

boolean empty()
요소들이 큐에 저장 되어있나 가리킴

Exception
빈 큐에다 dequeue하면 QueueEmpty 예외 throw


Application of Queues

Direct applications
기다리는 줄
분배된 리소스에 접근(예시: 프린터-먼저 출력 예정인 파일이 먼저 출력)
다중프로그래밍
Indirect applications
알고리즘들을 위한 임의의 데이터 구조
다른 데이터 구조를 위한 구성요소


Array-based Queue
사이즈가 N인 원형 배열
세 가지 변수가 front 와 rear의 track을 유지해준다
f : front element의 index
r:  rear 바로 옆 index (여기서는 rear에 공백, front 와 rear을 구분해주기 위해 둘 중 하나는 비어있어야 한다)-> 비어있는 상태와 꽉 찬 상태를 구분하기 위해
              비어있으면 f == r
              꽉 차있으면 (rear+1)%N=f
n: 큐에 있는 아이템의 개수

Queue Operations
사이즈와 빈 공간을 표시하기 위해 n을 사용

Algorithm size()
  return n

Algorithm empty()
  return(n=0)

enqueue 오퍼레이션은 배열이 꽉 찼을 때 예외를 던진다
예외는 구현 의존적이다

Algorithm enqueue(o)
  if size() = N - 1 then
     throw QueueFull
    else
      Q[r] <- o
      r <- (r+1) mod N. (%)
      n <- n + 1

큐가 비어있으면 dequeue 오퍼레이션은 exception QueueEmpty를 던진다
이 예외는 queue ADT에 구체화 되어있다

Algorithm dequeue()
  if empty() then
     throw QueueEmpty
    else
    f <- (f+1) mod N
    n <- n-1



Queue interface in C++
QueueEmpty예외에 대한 정의가 필요
![image](https://user-images.githubusercontent.com/102133961/174471348-4c806fd6-f5c8-43ec-9e8c-7bf5e57a1f01.png)
<img width="335" alt="image" src="https://user-images.githubusercontent.com/102133961/174471358-5aa975c4-a8ea-4a70-9cfb-5d5a4c1b0cea.png">

	       Application: Round Robin Schedulers

이 round robin schedulers를 큐를 사용해 반복적으로 수행할 수 있다


CPU 시간을 태스크의 생성 순으로 차례로 분배하는 방식. 태스크가 입출력 명령 등을 내었을 때 CPU 시간을 포기하고 다시 대기 행렬의 맨 뒤로 되돌려진다. 라운드 로빈 정책은 각 프로세스에게 차례차례로 일정한 시간 단위 동안 CPU를 차지하도록 하는 것이다.

1. e = Q.front(); Q.dequeue()
2.  Service element e
3.   Q.enqueue(e)

요약하면 front에 있는 거 뺀 다음 다시 마지막에 넣어주기
![image](https://user-images.githubusercontent.com/102133961/174471362-d7e6d378-04ce-4117-aafa-381c712aa894.png)
<img width="398" alt="image" src="https://user-images.githubusercontent.com/102133961/174471368-2d1975f5-653b-40e0-b0d2-3818951d09db.png">
<img width="229" alt="image" src="https://user-images.githubusercontent.com/102133961/174471371-91dd149f-e38c-40d3-b443-5a9309ef3755.png">
<img width="228" alt="image" src="https://user-images.githubusercontent.com/102133961/174471374-44462eff-e938-42c9-87b3-b92fedafb1d2.png">
<img width="270" alt="image" src="https://user-images.githubusercontent.com/102133961/174471375-ee088096-c0fe-4ac9-b844-d26b25dc433b.png">
<img width="265" alt="image" src="https://user-images.githubusercontent.com/102133961/174471378-0e2b8c14-ee7a-49c0-a1ad-8f4cf73e533f.png">
Queue as a linked list
큐를 singly linked list로 설명할 수 있다
   front 요소가 첫번째 노드에 저장
   rear 요소가 마지막 노드에 저장 (tail 쪽)

space cost: O(n)
time cost: O(1)
![image](https://user-images.githubusercontent.com/102133961/174471384-7af35909-f592-4227-91cf-474ace9c16e9.png)
<img width="122" alt="image" src="https://user-images.githubusercontent.com/102133961/174471387-211f1c97-1d48-4ce6-9647-5c5458ceae73.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471390-df50a98d-5a68-4f2e-a264-e71354dc83eb.png">
<img width="410" alt="image" src="https://user-images.githubusercontent.com/102133961/174471394-05664ccc-9365-468e-b6a7-4e24547fb1e6.png">
<img width="280" alt="image" src="https://user-images.githubusercontent.com/102133961/174471396-37b85388-b59f-4f67-8c06-c68c94fa8d80.png">
<img width="236" alt="image" src="https://user-images.githubusercontent.com/102133961/174471398-0de9fae6-6526-42df-bf55-4673a1c1b1f8.png">

Recursion
The Recursion pattern
Recursion은 메소드(함수)가 자기 자신을 부르는 것
classic example: factorial 함수

Recursion definition
 

as a c++ method
int recursiveFactorial(int n){
   if(n==0) return 1;
    else return n*recursiveFactorial(n-1);
  }

O(n) O(n)
Content of a Recursive Method
Base case(s)
재귀 호출을 하지 않는 input 변수의 값
반드시 마지막 하나의 base case만 있어야 한다
모든 가능한 재귀 호출의 연쇄는 결국 base case로 도달해야 한다

Recursive calls
현재 메소드(함수)를 호출
모든 재귀 호출은 base case을 향하는 과정으로 향하게끔 만들어져야 한다

Linear Recursion

Test for base cases
  한 세트의 base case(최소 한 개 이상)를 시행함으로써 시작
모든 가능한 재귀 호출의 연쇄는 반드시 결국 하나의 base case에 도달해야 한다, 그리고 그 각각의 base case는 recursion을 사용하지 않아야 한다

Recur one
단 하나의 재귀 호출을 수행
이 단계는 얼마나 가능한 재귀 호출을 만들 수 있는가를 결정하는 테스트일 수도 있지만, 궁극적으로 단 하나의 재귀 호출을 만들어야 한다
각각의 가능한 재귀 호출을 정의해서 그것이 base case를 향한 단계를 만들 수 있도록 한다

Example of Linear Recursion

Algorithm LinearSum(A, n):
Input:
  A integer array A and an integer n=1, such that A has at least n elements
Output:
  the sum of the first n integers in A
if n=1 then
 return A[0]
 else
  return LinearSum(A, n-1) + A[n-1]
![image](https://user-images.githubusercontent.com/102133961/174471403-8595df41-c329-408a-b516-11a0dee1bcdf.png)
Reversing an Array

Algorithm ReverseArray(A, i, j):
   Input: An array A and nonnegative integer indices(비음수 정수 지수) i and j
   Output: The reversal of the elements in A starting at index i and endging at j
   
   if i < j then
     Swap A[i] and A[j]
     ReverseArray(A, i+1, j-1)
    return


Defining Arguments for Recursion
재귀 함수를 만들기 위해 재귀가 용이하도록 함수를 작성하는 것이 중요
이 경우 메소드에 전달되는 추가 파라미터를 정의해야 할 수도 있다
예를 들어 배열 reversal 함수를 ReverseArray(A)가 아니라 ReverseArray(A, i, j)로 정의할 수 있다

Tail Recursion
Tail Recursion은 linearly recursive 함수가 그것의 재귀를 마지막 step에서 호출할 때 일어난다
배열 reversal method이 예시이다
그러한 함수들은 non-recursive 함수들로 쉽게 바꿀 수 있다( 얼만큼의 리소스들을 낭비하지 않는)
함수 가장 마지막에 재귀적인 호출이 있고, 해당 재귀호출 이후에는 로직이 없는 경우 Tail Recursion이다.
해당 방법을 사용하면, Running Time 즉 시간복잡도에는 영향을 주지는 않지만
Stack(Memory)의 사용량을 적게 만들 수 있다.


Algorithm InterativeReverseArray(A,i,j):
   Input: An array A. nd nonnegative integer indices i and j
   Output: The reversal of the elements in.  starting at index i and ending at j
   while i<j do
    Swap A[i] and A[j]
    i=i+1;
    j=j-1;
   return

Binary Recursion
binary recursion은 각각의 non-base case에 대한 두개의 재귀 호출이 있을 때 일어난다
Problem: 정수 배열 A에 있는 모든 숫자를 더해라

Algorithm BinarySum(A,i,n):
   Input: An array A and integers i and n
   Output: The sum of the n integer in A starting at index i

  if n=1 then
     return A[i]
  return BinarySum(A, i, n/2) + BinarySum(A, i+n/2, n/2)


Example: Binary Recursive Method
Problem: 배열 A에 있는 모든 정수를 더해라
![image](https://user-images.githubusercontent.com/102133961/174471411-039d265f-979c-4116-bee3-c2fb88787828.png)
<img width="361" alt="image" src="https://user-images.githubusercontent.com/102133961/174471413-aa315982-950d-4644-a1e5-d82db62df0f2.png">
Computing Fibonacci Numbers
Fibonacci numbers are defined recursively:
 
Recursive algorithm (first attempt)
   Algorithm BinaryFib(k):
      Input: Nonnegative integer k
      Output: The kth Fibonacci number F_k
     if k<=1 then
        return k
     else 
        return BinaryFib(k-1)+BinaryFib(k-2) 
![image](https://user-images.githubusercontent.com/102133961/174471416-e1338f6c-984a-410f-a958-1e87bfb7d82f.png)
<img width="303" alt="image" src="https://user-images.githubusercontent.com/102133961/174471421-273bb2eb-eb50-4f20-a003-c17962d7883a.png">

시간복잡도 O(2^n)
공간복잡도 O(2^n)
A better Fibonaccit Algorithm
  linear recursion을 대신 사용
  
Algorithm LinearFibonacci(k):
  Input: A nonnegative interger k
  Output: Pair of Fibonacci numbers (F_k,F_(k-1))
 if k = 1 then
      return (k,0)
    else
      (i, j) = LinearFibonacci(k-1)
      return(i+j, i)

LinearFibonacci makes k-1 recursive calls









TREE

What is a Tree
computer 과학에서 tree는 계층적 구조의 축약 모델이다
parent-child관계를 가진 노드들로 구성되어있다.

Application:
조직도
파일 시스템
프로그래밍 환경

Tree Terminology(용어)
![image](https://user-images.githubusercontent.com/102133961/174471430-d78264e9-4df3-4191-acd1-48a931940337.png)

<img width="350" alt="image" src="https://user-images.githubusercontent.com/102133961/174471431-f5e95a8e-d0da-4591-9320-0ff13b1cdcb2.png">
Root : 최상위 노드. 즉, 부모가 없는 노드. 일반적으로 트리의 access point 는 Root이다.
Internal node : 내부 노드. child가 적어도 하나 있는 노드
External node : 단말 노드. 위치상 맨 끝 노드를 의미하며 leaf 라고도 불린다.
Ancestors of a node : 한 노드의 모든 상위 노드. 직속 상위인 parent 뿐만 아니라 root 까지의 모든 상위노드. ex. itself parent, grandparent, great-grandparent 등
Descendant of a node : 한 노드의 모든 하위노드. 직속 하위뿐 아니라 말단 노드까지의 모든 하위노드 (자기자신 포함)
Depth (node) : 한 노드의 조상 수
Height (tree) : 트리의 노드 중 Depth의 최댓값
Subtree (=부분트리) : 한 노드와 그 노드의 후손을 전부 포함하는 트리의 요소


Depth and height
Edge(u,v):  u와 v 노드의 페어 ( u 가 v의 parent)
Path(v1, =v2,v3,...): 일련의 노드
Depth of node v
  만약 v가 root node이면 0
  v의 parent의 depth 수 + 1 (자기자신)
Height of node v
  만약 v가 leaf node이면 0
  v의 children의 최대 height + 1


Tree ADT
Generic methods:
  interger size() // 전체 노드의 개수
  boolean empty() //비어있는지
Ancestor methods:
  Node root() //루트의 position
  list<Node> nodes() //전체 노드를 리스트 형태로
Node-based methods:
  Node p.parent() //노드 p의 parent
  list<Node> p.children() //노드 p의 children
Query methods:
  boolean p.isRoot() // Root인지
  boolean p.isExternal() //leaf인지
Additional update methods

Traversal은 체계적인 방법으로 tree 의 node를 방문한다
선형 자료구조는 next, prev 등을 이용해 반복자를 이동시키며 전체 데이터에 접근할 수 있었다. 이와 비슷하게, 트리에서는 parent-child 관계를 이용해 특정 노드에서부터 반복자를 이동시켜 전체 데이터에 접근한다. 이를 "순회" 방법이라 하고, 여러 과정을 거쳐야 하는 복잡한 개념이므로 알고리즘으로 취급한다. 순회는 재귀함수를 통해 구현된다.
헷갈릴만한 개념 : 반복자 이동시, 하나의 노드를 여러번 거쳐갈 수 있지만, 해당 노드에 대한 처리는 한번만 한다. 때문에 순회는 "트리의 모든 노드를 한번씩 처리하는 알고리즘" 으로 이해할 수 있다.

preorder traversal에서 노드는 그것의 descendants 전에 방문된다

Application: 구조화된 문서를 프린트 할 때

Algorithm preOrder(v)
   visit(v)
 for each child w of v
      preorder(w)
![image](https://user-images.githubusercontent.com/102133961/174471436-21041d3d-0846-40b9-bcdf-db2ea4bcf2b4.png)

<img width="329" alt="image" src="https://user-images.githubusercontent.com/102133961/174471440-484b24c3-c9c8-43ce-b158-af7d0c0255c4.png">
Postorder Traversal

postorder traversal은 descendants 다음에 들려진다

application: 파일 구조의 space 계산할 때

Algorithm postOrder(v)
 for each child w of v
    postOrder(w)
  visit(v)
![image](https://user-images.githubusercontent.com/102133961/174471444-47bd59a5-a632-48cd-b4e4-1e9568523369.png)
<img width="308" alt="image" src="https://user-images.githubusercontent.com/102133961/174471448-58145314-821f-4184-b5e1-5aff5bdd0adb.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471449-8e639871-ad7b-4bcf-94e1-4a6c1aa0f820.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471451-91fb77eb-94f8-45b4-a7dc-3e5a9c94af57.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471454-770ea00d-8888-4118-81a4-e408f65d8942.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471457-aaeffdff-4062-4c79-ad25-77c9b0a3941a.png">
Binary Trees
자식노드가 최대 2개(제대로 된 binary tree는 정확히 2개 가짐-정이진트리 proper binary tree)
자식노드는 순서화된 짝이다(자식들을 순서로 구분, 즉 좌우반전 트리도 다른 트리)
-left child / right child 라고 불린다
Alternative recursive definition: a binary tree is either
단 하나의 노드를 포함하고 있는 트리 또는 
root가 순서화 된 짝의 자식 노드를 갖고 있는데, 이 노드도 binary tree이다

Arithmetic expression tree
Binary tree는 산술식(arithmetic expression)과 관련이 있다
internal nodes: operators (자식이 적어도 하나)
external nodes: operands
![image](https://user-images.githubusercontent.com/102133961/174471462-08100edd-2b81-417e-99f7-f8f83e4437b1.png)
<img width="302" alt="image" src="https://user-images.githubusercontent.com/102133961/174471464-2f942911-7c6f-4c81-87db-8948453da8c1.png">
이런 경우엔 postOrder 방식?

Properties of binary trees


Notation
n : 노드의 개수
m: internal nodes 의 개수
l : leaf node의 개수
h : height 

(height와 관련된 식)
정이진트리에서 height가 중요한 이유-
높이는 곧 루트에서 해당 노드로 오기까지 연산 횟수와 직결
이는 이진트리가 탐색에 활용될 때 성능에 직접적인 영향을 미친다

properties:
n = m + l (모든 노드는 반드시 인터널 노드이거나 리프 노드이다)

내가 n 개의 노드를 가졌을 때, height 가 최대가 되는 경우는 모든 노드를 쭉 폈을때,
즉 n-1 = h 일때 즉 h <= n-1
height를 최소로 하려면 옆으로 꽉꽉 채워야 하니까
 각 층마다 2의 0승 2의 1승 2의 2승 이렇게 내려가서 최종적으로는 2의 h(트리의 height)승이 나오고 이 모든 것을 더한 것이 총 노드의 개수 n이다
n=(1*(2^(h+1)-1))/(2-1)

등비수열로 계산하면 이렇게 되고,
n = 2^(h+1) - 1
2^(h+1)  = n + 1
                                       h+1=〖log〗_2 (n+1)
             h=〖log〗_2 (n+1)-1
 
즉 
             〖log〗_2 (n+1)-1 <= h <= n-1

이 식을 n에 대한 식으로 정리하면
                                    h+1 <= n<= 2^(h+1)-1


m은 n에서 height 한 개가 줄어든 거니까
                                   
                                       h <= m <= 2^h-1


l에 대한 것은 가장 적을 때가 노드가 일렬로 늘어설 때 가장 많을 때가 옆으로 늘어났을 때

                                       (0 or 1)  <= l <= 2^h

Properties of proper binary Trees

n : 노드의 개수
m: internal nodes 의 개수
l : leaf node의 개수
h : height 

l = m + 1

귀납 증명)
<base case>
  노드가 하나 있는 경우: l = 1, m = 0 ㅡ>  l = m+1
  노드가 3개 있는 경우: l = 2, m = 1 ㅡ>  l = m + 1

<inductive assumption>
l = k , m= k - 1

만족한다고 가정했을 때

l을 하나 증가시키고 싶다

<inductive case>
리프노드를 하나 증가시키고 싶다면, 기존의 리프노드에다 자식 두 개를 더 달아주는 수 밖에 없다

그러면 원래 리프는 non leaf가 됐다
l = k-1+2
m = k-1+1

즉 l = k+1, m = k

여전히 l이 m보다 1이 큰 관계가 유지됨으로 (임의의 k이기에 어떤 수를 넣어도 성립)
공식이 성립






h <= m <= 2^h-1

이 공식을 l = m+1을 이용해 바꾸면 ( l-1 = m)
                                           〖log〗_2 l<=h<=m



   	〖log〗_2 (n+1)-1 <= h

	l <= 2^h

이 공식들은 그냥 binary tree 공식과 같고


m + l = n이니까
l = m+1에 대입하면
2m + 1 = n

이때 m = l - 1
즉                                             2l-1=n



위의 〖log〗_2 l<=h<=m 공식에서 h<=m이므로
m=(n-1)/2이기에

                                             h <= (n-1)/2

이거 트루냐 아니냐 시험 나올지 모름
![image](https://user-images.githubusercontent.com/102133961/174471469-15ad23ce-1e47-48c7-b027-22f9052ee644.png)

<img width="232" alt="image" src="https://user-images.githubusercontent.com/102133961/174471473-df4c4b11-8146-4e33-ab1b-872654114e75.png">
Inorder Traversal

binary tree이기에 생긴다
left를 다 하고 나서 나를 하고 다음 right로 넘어감

Algorithm inOrder(v)
  if-v.isExternal()
     inOrder(v.left())
   visit(v)
  if-v.isExternal()
      inOrder(v.right())


cost O(h) space
time O(n)


Arithmetic expression Print

인간이 보는 방식으로 표현하려면 inorder Traversal 사용
이때 print 까지 행동으로 생각하면 
preorder
inorder
postorder
가 전부 있다 -> Euler Tour
![image](https://user-images.githubusercontent.com/102133961/174471476-4001386b-f282-4e37-a744-7ff1b3af8332.png)
<img width="330" alt="image" src="https://user-images.githubusercontent.com/102133961/174471481-e442bf37-a93f-4d7a-af1b-948eb88569ef.png">
Level order Traversal

인간이 노드를 그리는 순서
레벨 바이 레벨로 전부 방문
![image](https://user-images.githubusercontent.com/102133961/174471485-494d3d3d-c8db-426e-b6fe-5d47c1e146b7.png)
<img width="248" alt="image" src="https://user-images.githubusercontent.com/102133961/174471488-8f88b5be-bdf2-4d43-aca6-2375d9eee8ed.png">
<img width="326" alt="image" src="https://user-images.githubusercontent.com/102133961/174471491-f897ad96-bb9e-4e9f-bf7b-f1c0bbdbfee4.png">
time O(n)
space O(레벨의 가장 많은 노드 수w)


*complete binary tree
위에서 부터 아래로 left 에서 right로 중간에 건너뛰지 않고 생성
->이런 경우에는 array based로 생성하는 것이 적합
![image](https://user-images.githubusercontent.com/102133961/174471493-47fc0efc-91d1-459a-9950-1f76ad81b519.png)
<img width="423" alt="image" src="https://user-images.githubusercontent.com/102133961/174471495-f4f5975e-7367-4b29-b9b5-7d10f7f787af.png">
<img width="423" alt="image" src="https://user-images.githubusercontent.com/102133961/174471497-2e292cdf-aefa-4249-97f0-fc4874ad6bf9.png">
<img width="423" alt="image" src="https://user-images.githubusercontent.com/102133961/174471499-08581ced-6349-40c1-be51-b948b89ba321.png">
<img width="452" alt="image" src="https://user-images.githubusercontent.com/102133961/174471503-77303812-e76f-4512-b6df-e97c23d3a908.png">
<img width="322" alt="image" src="https://user-images.githubusercontent.com/102133961/174471510-b18e9f68-90ee-45d7-83af-d528043474aa.png">

	       Priority Queues
sequence- Array
        - Linked list
stack - Array
      - Linked List
Queue - Array
      - Linked List
 Tree - Linked Structure
bin Tree - linked list
         Array


일반 Queue가 Queue의 체류 시간을 기준으로 우선순위를 정했다면
이와 다른 우선순위를 정하는 것이 priority queue

sorted unsorted heap으로 구현 

Priority Queue ADT

우선순위 ordering이 존재
insert(=enqueue)
일반적으로 (key, value)가 들어감
key는 priority를 나타내는 속성

removeMin(=dequeue)
key값이 작을수록 priority가 높다(보통 경우에)


min() // 삭제하지는 않지만 우선 순위가 가장 높은 (키 값이 가장 작은) 값 리턴
size()
empty()
바꾸진 않고 그냥 접근하고 리턴하는 함수들

Total order Relations
키는 순서가 정의된 임의의 객체이다
priority queue 안에 있는 두 가지 명확한 entries가 같은 키를 가질 수도 있다


Reflecxive property ( x <= x)
자기 자신과 관계를 맺고 있는가
Antisymmetric property (x<=y && y<=x)
symmetric하지 않다. 이런 경우엔 둘 다 같다
symmetric은 자기 자신을 두고 양쪽에 있거나

Transitive property(x<=y && y<= z -> x <= z)


Total order relations은 선택한 관계를 집합내 모든 구성이 만족해야 한다
partial order은 전부 만족 안함


comparator AdT
p=(1,2)
q=(2,1)
여러개의 comparator를 만들어 비교
클래스에 단일 function만 제작
![image](https://user-images.githubusercontent.com/102133961/174471515-2332db2a-45dd-4e21-a6d6-9a8b9d9ddeac.png)
<img width="327" alt="image" src="https://user-images.githubusercontent.com/102133961/174471521-674176c9-d0b5-4ed3-bdd1-50d40075e242.png">
sort(list, LeftRight)
sort(list, BottomUp)
보통 어떤 ordering 이 필요한 함수에 넘기기 위해 comparator 제작

Priority Queue Sorting
첫번째 while문 돌면서 S list에 있는 노드 한개씩 넣기
(pQ에서의 n번의 insertion)
removeMin함수를 통해 정렬(키 값이 작은 순으로)
그걸 다시 S에 넣기 
(pQ에서의 n번의 deletion)

pQ - insert
   - removeMIn (둘다 상수가 되게 할 수 없다)

1. insert를 O(1) removeMin을 O(n) -> unsorted list 구현
대충 집어넣고 뽑을 때 제대로 정렬(매번 검색해야 하니까 항상 O(n))
2. insert O(n) removeMin O(1) -> sorted list
처음 집어넣을 때 그냥 정렬하면서 넣기
->worst O(n^2) time
heap은 둘 중에 하나가 상수면 너무 안좋아지니까 둘다 logn 타임
-> nlogn타임


unsorted list -> selection-Sort
sorted list -> insertion-sort

Selection- Sort
1+2+...+n = n(n+1)/2 즉 O(n^2) time
![image](https://user-images.githubusercontent.com/102133961/174471529-61f27113-b6e8-486c-ab03-f01360f3baf0.png)
<img width="307" alt="image" src="https://user-images.githubusercontent.com/102133961/174471532-b64664f2-3945-4a6e-add8-bc3a2d1baaef.png">
insertion-sort
빈 공간에 들어가는 경우의 수
1+2+...+n = n(n+1)/2 
![image](https://user-images.githubusercontent.com/102133961/174471537-1ccda40a-9205-4853-af65-2b3c05510e4a.png)
<img width="305" alt="image" src="https://user-images.githubusercontent.com/102133961/174471539-0eb1923f-0100-496e-be4e-c9e2e5ac811d.png">
sequence 말고도 priority queue 라는 extra space를 사용해서 
O(n) + O(n) = O(2n) = O(n)

Inplace algorithm
extra space 사용 안 함
Array로 구현해서 sorted 된 부분과 sorted 안 된 부분으로 나눔
처음에는 물론 unsorted 파트 전부
왼쪽에서 오른쪽으로 하나씩 보면서 비교

insertion sort(sorted list)
[ 5 4 2 3 1]이면 
처음 5는 그대로 납 둠
그다음 4가 문제,  4가 앞 뒤 비교해서
[4 5| 2 3 1]
5랑 위치 바꿈

그럼 4, 5 는 sorted 구역

그 다음 2도 5랑 4랑 비교해서 swap

그럼

[2 4 5 | 3 1]

이렇게 구분 (sorted 영역과 unsorted 영역으로)
5를 기준으로 걸어나간다고 생각하면 쉬움
Array안에서만 해결해서 in-place insertion Sort


in-place selection sort
제일 작은 것을 찾아 맨 앞으로 집어넣는다(swap)
서로 swap 한다는 것에 주의!
[5 4 2 3 1]

[1|4 2 3 5]

[1 2 | 4 3 5]

[1 2 3 | 4 5]

[1 2 3 4 | 5]

![image](https://user-images.githubusercontent.com/102133961/174471542-4dad4f00-c36e-48ea-b79f-c28679f27526.png)

Heap
Recall Priority Queue ADT

(key, value) 구조
주로 key값이 작을수록 우선순위 높음
insert(e)
removeMin()
min()
size()
empty()
eraseFront()

Recall PQ.sorting
![image](https://user-images.githubusercontent.com/102133961/174471546-6d98b7c1-3e8c-4be9-beb9-6a929a028c03.png)
<img width="355" alt="image" src="https://user-images.githubusercontent.com/102133961/174471548-04f80686-1160-4ef2-bb55-444222a7e473.png">
heaps

heap은 key를 nodes에 저장하고 있는 binary tree이다
head-order: 모든 Internal nodes에서 
key(v) >= key(parent(v))
즉 부모로 갈 수록 키 값이 작다(즉 우선순위가 높다)
반대로 자식으로 갈 수록 값이 크다 (우선순위가 낮다)
이런 힙을 minHeap
반면에 자식으로 갈수록 키 값이 크면 maxHeap


complete binary tree
빠짐 없이 전부 있다면 Array로 구현 가능!
어떤 노드가 i번째 노드일 때, left는 항상 2i번째 right는 2i+1에 위치
항상 2개씩이니까 가능한 일
반대로 부모는 2로 나누면 접근 가능
->포인터로 따라갈 필요 없이 데이터 접근에 용이

일반적인 tree도 구현이 가능한데 최악의 경우 O(2^n) space가 걸릴 수 있다
한 줄로 나열 했을 때 -- 1 3 7 ...로 2^n-1로 수렴

heap - insert(). O(logn) time
     - removeMin() O(log n) time
total order relation : 전부 다 비교해봐야 알 수 있음
sorted list같은 경우 totla order relation으로 너무도 많은 정보를 포함하고 있다


정보를 최소한으로 줄이려면
1번이 맨 위에 있고 나머지는 비교를 하지 않는다!
->라는 자세를 취한다

heap order에서

u의 자식이 v일때
key(v) >= key(u)라는 관계만 취한다

번와로 v의 cibiling이 w라고 하면
w와의 관계는 어떠한 것도 확실하게 정의되지 않는다
다만 부모보다 자식의 key 값이 크다는 것만은 확실


사실 Heap의 time은 O(h)이기 때문에, 등비수열로 O(logn)
![image](https://user-images.githubusercontent.com/102133961/174471550-4675897d-1e39-4bc9-8145-77cababfa9e3.png)
<img width="320" alt="image" src="https://user-images.githubusercontent.com/102133961/174471552-6bcee3bc-37e7-40c1-9bc6-a5e4a78d6cb6.png">

insert
새로운 element 붙이고
upheap()

root노드가 될때까지, 아님 자기보다 작은 key 값을 가진 노드가 parent에 있을 때까지
위 노드랑 swap

->최악의 경우 O(h) = O(log n) time 최악의 경우


[ * 2 5 6 9 7 ] 있다고 가정 9는 5의 자식

일단 1 갖다 붙임

[* 2 5 6 9 7 1]

방식은 일단 붙이고 고치는 방식->heapify  = restructure

restructure - upheap(). : 
          - downheap() : 
space는 while 문으로 iterative 하게 구현하면 O(1) extra space
![image](https://user-images.githubusercontent.com/102133961/174471554-27ca6a01-b1e0-447a-a8f9-17c516e202bf.png)
<img width="313" alt="image" src="https://user-images.githubusercontent.com/102133961/174471557-e14f307c-4270-4e2a-ace8-c465ae74ef35.png">
remove

라스트 노드랑 swap 
그 라스트 노드를 삭제 후 리턴
그 다음에 downheap()을 통해 수정

root가 내려가야 하느냐 안하느냐
left 와 right 둘 다 비교

root left right 세 개중 가장 작은 것이 올라감
(결국 세 개 전부 비교해야 함)
각각의 subtree 비교

선택을 하기 위해 노드 세 개를 비교하는 연산이 필요하지만 결국 이 비교하는 연산은 O(1) 또는 O(2)라 무시, 결국 실질적으로 내려오는 연산만 최악의 경우 O(h)= O(log n)만큼 걸림

PQ 에서 결국 heap sort는 
O(nlogn) time

unsorted sequence 로 구현된 pq를 이용한 정렬 (=선택정렬) 과 sorted sequence로 구현된 pq를 이용한 정렬 (=삽입정렬)은 모두 O(n^2) 시간이 걸린다. 같은 방법으로 heap으로 구현된 pq를 이용한 정렬 (= Heap-sort) 시간을 계산해보자!
Heap-sort 알고리즘
1단계 : s가 빌 때까지 p에 삽입 한번 삽입하는데에 O(log n) 시간이 걸리므로, n 번 삽입하는데에는 총 O(n log n) 시간이 걸린다.
2단계 : p가 빌 때까지 s에 삽입, p 하나씩 삭제 탐색 min은 O(1) 시간, 삭제 removeMin은 O(log n) 시간이 걸리므로 총 O(n log n) 시간이 걸린다.
⇒ heap을 이용한 sort 즉 Heap-sort는 총 O(n log n) 시간이 걸린다.
<aside> 💡 n이 충분히 크면 O(n^2) 보다 O(nlogn)이 훨씬 효율적이다. (언제나 더 효율적이진 않다는것 주의!) 대소를 비교를 통한 정렬 알고리즘 중 점근분석 시 가장 빠른 알고리즘은 O(n log n) 시간이 걸린다. 따라서 O(n log n) 시간이 걸리는 정렬 알고리즘을 optimal 하다고 표현한다.
</aside>
배열(vector) 기반 힙
힙은 특별한 일이 없으면 배열로 구현된다.
힙 자체가 완전이진트리이므로 배열로 구현이 충분히 가능하다!
•	복습 : 배열로 구현된 완전이진트리
노드들의 관계를 통해 구현했던 앞선 트리 구현 방법과 달리, 이진트리를 배열로 구현할수도 있다.
깊이가 같은 노드를 왼쪽에서부터 순서를 매기며 인덱스를 정해준다.
ex. root : 1번 인덱스 , root_left : 2번 인덱스, root_right : 3번 인덱스
헷갈림을 방지하기 위해 0번 인덱스는 사용하지 않고 1번 인덱스를 루트노드로 지정한다.
이때 부모 노드와 자식노드의 관계는
left 자식 노드 = 2 * 부모 노드 , right 자식노드 = 2 * 부모노드 + 1
로 표현되며, 위 식을 토대로 자식과 부모 사이를 이동할 수 있다.
cf. 부모, 자식의 이동이 그렇게까지 복잡하지 않은 이유! 부모 인덱스를 idx1, 자식 인덱스를 idx2라고 할때, idx2가 left든 right든 정수끼리의 나눗셈 idx1/idx2을 통해서 그대로 연산되거나 소숫점 0.5이 버려진채로 연산할 수 있다. 따라서 한번의 연산으로 부모, 자식을 찾을 수 있다.
 
🤔 힙을 굳이 배열로 구현하는 이유는?
하나의 노드 당 링크필드를 3개 가졌던것과 달리 배열은 메모리를 적게 사용한다.
이러한 메모리 문제뿐 아니라 가장 중요한 장점은 last노드를 찾기 쉽다는 것이다!!
완전이진트리의 구조에 기반하면, last 노드는 항상 마지막 노드 즉, v[size]이므로
O(1)시간에 last노드에 접근할 수 있다.
또한, 입력이 배열로 주어지면 in-place 구현을 할 수 있다는 장점도 있다.
 
Heap merge 하기
정렬된 두 힙과 하나의 키가 주어진 상황을 가정하여 Heap-sort를 해보자.
두 노드를 모두 합쳐서 처음부터 sort 할수도 있겠지만, 이는 기존 힙구조를 100% 활용하는 방법은 아니다.
ex. n개의 원소를 갖는 힙 2개가 주어졌을때 위 방법으로는 정렬하는데에 O(n log n) 시간이 걸림
이를 보완할 방법으로는 두 힙을 merge하는 방법이 있다.
주어진 키를 루트 노드로 하고, 나머지 두 힙을 하위트리로 설정하면 힙의 구조 조건을 만족하고,
이후 루트 노드를 down heap 하여 순서 조건을 만족하면 훨씬 더 효율적으로 Heap-sort를 할 수 있다.
ex. 이런식으로 총 n개의 노드가 주어졌을경우, 정렬하하는데에 O(log n) 시간이 걸림
 
하나의 노드를 루트노드로 설정 → 구조 조건 만족
 
설정된 루트노드를 Down Heap → 순서 조건 만족
 
Bottom-up Heap construction
위의 방법처럼 두개의 힙을 merge 하는 방법을 이용하여 효율적인 정렬 알고리즘을 완성해보자.
🤔 이름이 왜 Bottom-up 일까?
힙을 말단부터 시작해서 점점 위로 채워 나가기 때문이다.
채워지는 노드들은 left, right 자식을 두개의 힙으로 여기고 힙을 merge 한다.
(새로운 노드를 루트 자리에 채워놓고 Down heap 진행)
 
•	자세한 구조도
 
 
🤔 Bottom-up Heap construction 을 만드는데에는 얼마의 시간이 걸릴까?
Bottom-up으로 구현하는 heap sort의 수행시간을 알기 위해서 1단계인 힙 생성과정의 시간을 분석해야 함
성능 분석을 하기 위해 최악의 경우를 가정해보자.
⇒ 새로 채워지는 모든 노드가 말단노드까지 이동함!
이때의 연산횟수를 한눈에 파악하기 위해
새로 채워지는 노드는 right와 한번 자리가 바뀌고 이후 말단을 만날때까지 left와 자리가 바뀐다 라고 가정하여
연산이 이루어지는 곳을 빨간 간선으로 표시하면 다음과 같음을 볼 수 있다.
 
이때 빨간 간선에 대해 1. 두번 칠해진 간선은 없다. 2. 한번도 칠해지지 않은 간선도 있다. 가 성립하므로
빨간 간선 개수 (= 최악의 경우 연산 횟수)는 전체 간선수보다 항상 작다.
또한 전체 간선은 입력값 n 보다 1 작으므로
최악의 경우 연산 횟수 = 2 x (빨간 간선 수) ≤ 2 x (총 간선수) ≤ 2 x (입력값 n)이 성립하여
Bottom-up 방식으로 생성되는 힙은 O(n) 시간이 걸린다.
정리
따라서 Bottom-up 방식으로 Heap sort를 진행하면
일반적인 방법으로 진행했을 때의 1단계 수행시간 O(n log n) 보다 적은 시간인 O(n) 시간으로 힙을 만들 수 있다.
⇒ Bottom-up 방식으로 Heap-sort의 1단계의 수행시간을 줄일 수 있음!!
but, 2단계에서 여전히 O(n log n) 시간이 걸리므로 Heap-sort의 최종 연산시간은 O(n log n)이다.

	       
Maps & Dictionaries

Maps
맵 모델은 찾을 수 있는 key-value 엔트리들의 집합이다.
맵의 주요 기능은 searching inserting deleting이다
같은 키를 가진 여러 엔트리는 불가능
----------------------------------------------------------------------------------------
Dictionary
같은 키를 가진 여러 아이템(엔트리) 가능


The Map ADT
find(k): 키 k를 가지고 entry를 찾는다
만약 키 있으면 그 포인터 리턴
만약 없다면 특별한 iterator end를 리턴
put(k,v): 키 k와 값 v를 집어넣는다

erase(k): 키 k를 가진 엔트리를 지운다

size() empty() begin() end() 오퍼레이션도 있다



Dictionary ADT
find(k)
put(k,v)
erase(k)
begin(), end(), size(), empty()

findAll(k): 키 k를 가진 모든 엔트리의 포인터를 리턴하거나 이터레이터를 리턴

--------------------------------------------------------------------------------------------------------------

A Simple List-Based Map
우리는 map을 unsorted list (selection sort)를 이용해 효율적으로 설치할 수 있다
-우리는 맵에 있는 아이템들을 더블리 링크드 리스트를 기저로 한 리스트 S에 저장할 수 있다

Find Algorithm in List-based Map
Performance of a List-Based Map
Performance:
put은 sequence안에 그것이 이미 있나 결정할 필요가 있어서 O(n) time이 걸린다
find와 erase는 O(n) time이 걸린다 - 최악의 경우 주어진 키가 없을 때, 전부 돌아야 해서
unsorted list는 작은 사이즈를 가진 맵이나 put은 흔하게 수행되지만, searches와 remove는 거의 수행되지 않는 맵에서나 효율적이다

--> 그래서 주로 흔하게 사용하는 major implementation

Hash table
그들의 키를 이용해 엔트리를 찾는 것만 필요하다
find insert delete 에 O(1) expected time이 걸림(왠만하면)
최악의 경우 O(n)이지만 이것도 나쁜 소식은 아니다




Binary Search Tree
find insert delete 에 O(h) time이 걸린다 (즉 balanced tree-complete tree에서는 O(log n)이 걸린다)
그들의 순서에 따라 값을 찾는다 (내부 순서가 존재)

ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
Dictionary Problem

Given of collection of (key,value) pairs,
how to design a data structure 
such that     :              -insert(k,v)
                             =put(k,v)
                            -delete(k)
                              =erase(k)
                            -lookup(k)
                             (=search)
                              =find(k) 
t

he following operations
should be provided --> MAP or DICTIONARY

단지 MAP은 키를 중복 허용 안 함
DICTIONARY는 중복을 허용


둘 다 abstract data type



finall은 모든 포인터를 돌려준다

insert는 일종의 replace 역할도 한다(key값이 중복할 수 없으니까)


Search Tree
-binary search tree-Red-Black Tree (이녀석 안배움)
                -AVL-Tree      [insertion : O(logn)
                              [ del: O(logn)
                              [ lookup: O(logn)
                              [ nearest: O(logn)

Hash table
 randomized structure [ ins: O(1) expected
                    [ del: O(1) expected
                    [ lookup:O(1) expected 왠만하면










Binary Search Tree

: a binary tree satisfy the followings :
key(u) <= key(v) <= key(w)
여기서 v의 자식이 u,w
최악의 경우 height가 n만큼 커짐
