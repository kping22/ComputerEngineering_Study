# 스프링의 MVC에 대해서
- 객체지향프로그래밍에서, MVC란 사용자 인터페이스를 성공적이며 효과적으로 데이터 모형에 관련시키기 위한 방법론 또는 설계
방식 중 하나이다. MVC방식은 자바, SmallTalk등이 이용한다.
- MVC 패턴은 목적 코드의 재사용에 유용한 것은 물론, 사용자 인터페이스와 응용프로그램 개발에 소요되는 시간을 현저하게 줄여주는
형식이라고 많은 개발자들이 평가한다.
## 1) MVC 구성요소
- Model - 소프트웨어 응용과 그와 관련된 고급 클래스 내의 논리적 데이터 기반 구조를 표현한다. 이 목적 모형은 사용자 인터페이스에
관한 어떠한 정보도 가지고 있지 않다.
- View - 사용자 인터페이스 내의 구성요소들을 표현.(사용자에게 보여지는 화면)
- Controller - Model과 View를 연결하고 있는 클래스를 대표, Model과 View 내의 클래스들 간 정보를 교환하는 데 사용. 

## 2) Spring Framework(스프링 프레임워크)
- 자바(JAVA) 플랫폼을 위한 오픈소스 애플리케이션 프레임워크로서 자바 엔터프라이즈 개발을 편하게 해주는 오픈 소스 경량급 
애플리케이션 프레임워크 자바 개발을 위한 프레임워크로 종속 객체를 생성해주고, 조립해주는 도구
자바로 된 프레임 워크로 자바SE로 된 자바 객체(POJO)를 자바 EE에 의존적이지 않게 연결해주는 역할이다.
## 스프링 특징 간단하게.
- 크기와 부하의 측면에서 경량
- 제어역행(IoC)이라는 기술을 통해 애플리케이션의 느슨한 결합을 도모
- 관점지향 프로그래밍(AOP)을 위한 풍부한 자원
- 애플리케이션 객체의 생명 주기와 설정을 포함하고 관리한다는 점에서 일종의 컨테이너라고 할 수 있음.
- 간단한 컴포넌트로 복잡한 애플리케이션을 구성하고 설정할 수 있음.
## 스프링 특징 자세히.
- 경량 건테이너로서 자바 객체를 직접 관리. 각각의 객체 생성, 소멸과 같은 라이프 사이클을 관리하며 스프링으로부터 필요한 객체를 얻어
올 수 있다.
- 스프링은 POJO 방식의 프레임워크. 일반적인 J2EE 프레임워크에 비해 구현을 위해 특정한 인터페이스를 구현하거나 상속을 받을 필요가
없어 기존에 존재하는 라이브러리 등을 지원하기에 용이하고 객체가 가볍다.
- 스프링은 제어의 역행(IoC : Inversion of Control)을 지원. 컨트롤의 제어권이 사용자가 아니라 프레임워크에 있어서 필요에 따라 스프링
에서 사요자의 코드를 호출한다.
- 스프링은 의존성 주입(DI : Dependency Injection)을 지원. 각각의 계층이나 서비스들 간에 의존성이 존재할 경우 프레임워크가 서로 연결
시켜 준다.
- 스프링은 관점 지향 프로그래밍(AOP : Aspect-Oriented Programming)을 지원한다. 따라서, 트랜잭션이나 로깅, 보안과 같이 여러 모듈에서
공통적으로 사용하는 기능의 경우 해당기능을 분리하여 관리할 수 있다.
- 스프링은 영속성과 관련된 다양한 서비스를 지원. IBatis나 Hibernate 등 이미 완성도가 높은 데이터베이스 처리 라이브러리와 연결할 수 
있는 인터페이스를 제공한다.
- 스프링은 확장성이 높다. 스프링 프레임워크에 통합하기 위해 간단하게 기존 라이브러리를 감싸는 정도로 스프링에서 사용이 가능하기 때문에
수많은 라이브러리가 이미 스프링에서 지원되고 있고 사용되는 라이브러리를 별도로 분리하기도 용이하다.

# Spring의 AOP란?
- AOP는 Aspect Oriented Programming 관점 지향 프로그래밍의 약자로, 기존의 OOP에서 기능별로 class를 분리했음에도 불구하고, 여전히 로그,
트랜잭션 자원해제, 성능테스트 메서드처럼 공통적으로 반복되는 중복코드가 여전히 발생하는 단점을 해결하고자 나온 방식으로 이러한 공통 코드
를 '횡단 관심사'라 표현하며 개발코드에서는 비지니스 로직에 집중하고 실행시에 비지니스 로직 앞, 뒤 등 원하는 지점에 해당 공통 관심사를
수행할 수 있게 함으로서 중복 코드를 줄일 수 있는 방식이다.

# Spring의 DI란?
- DI란 Dependency Injection(의존성 주입)의 약자로, 객체들 간의 의존성을 줄이기 위해 사용되는 스프링의 IoC 컨테이너의 구체적인 구현방식
이다. 
DI는 기존처럼 개발코드 부분에서 객체를 생성하는 것이 아니라, 팩토리 패턴처럼 객체의 생성과, 데이터를 주입만 담당하는 Factory에 해당하는
별도의 공간에서 객체를 생성하고 데이터간의 의존성을 주입해 개발코드에서는 이를 가져다 씀으로서 의존성을 줄이는 방식이다. 이때, Factory
패턴의 Factory Class의 역할을 스프링의 환경설정 파일이 담당.
설정 파일을 통해 객체간의 의존관계를 설정함으로써 외부 Assembler가 객체간의 의존관계를 정의하게 되며, 객체는 의존하고 있는 객체를 생성
하거나 검색할 필요가 없어지므로 코드의 관리가 쉬워진다.

# MVC1과 MVC2 패턴의 차이?
## 1) Model1(JSP, 자바빈 또는 서비스 클래스)
- JSP 페이지 내에 로직 처리를 하기 위해 자바 코드가 출력을 위한 코드와 함께 삽입된다. JSP페이지는 요청이 오면 직접 자바빈이나 클래스를
이용하여 작업을 처리하고 처리한 정보를 클라이언트에 출력한다.
- 장점 : 구조가 단순하다.
- 단점 : 출력을 위한 HTML 코드와 로직 처리를 위한 Java 코드가 삽입되어 복잡하고, 유지보수가 어려워진다.

## 2) Model2(서플릿, JSP, 자바빈 혹은 서비스 클래스)
- 모든 처리를 JSP가 담당하는 것이 아니라 JSP 페이지와 서블릿 그리고 로직을 위한 클래스가 나뉘어 클라이언트의 요청을 처리한다. 클라이언트
에서 요청이 오면 처리할 모델을 클래스 또는 자비 빈이 담당하고 요청결과는 뷰(JSP), 흐름 제어는 Controller인 서블릿이 담당한다.
MVC 패턴이란 Model2 구조를 도입한 구조이며 다음과 같은 형태를 가지고 있다.
Model - 서비스 클래스 OR 자바빈
비지니스 로직을 처리하기위한 모든 것들이 모델에 속한다 
EX) 게시판 글쓰기, 가입, 로그인 등 로직을 수행하고 수행결과를 컨트롤러에 반환한다.
View - JSP
클라이언트에서 출력하는 화면을 말한다.
Controller - 서블릿
MVC 패턴의 모든 흐름제어를 맡는다.
브라우저에서 요청이 들어오면 어떤 요청인지를 분석하고 이 요청을 처리하기 위한 모델을 사용하여 처리한다 사용한 모델로부터 처리결과를 받으면 
추가로 처리하거나 가공해야할 정보가 있다면 처리후 request 또는 Session 객체에 저장하고 뷰를 선택하여 클라이언트에 출력한다.
- 장점 : M V C 모델이 나누어 지기 때문에 코드를 분리하여 유지보수가 용이하다. 뷰, 로직 처리에 대한 분업이 용이하다.
- 단점 : 구조가 복잡하여 습득이 어렵고 작업량이 많다.

# 스프링 필터와 인터셉터의 차이
![image](https://user-images.githubusercontent.com/58617250/75850229-1a3c0580-5e2a-11ea-9890-a95811550086.png)
- Filter와 Interceptor는 실행되는 시점이 다르다.
Filter는 Web Application에 등록을 하고, Interceptor는 Spring의 Context에 등록을 한다. 컨트롤러에 들어가기전에 작업을 처리하기위해
사용할 수 있다는 공통점이 있지만 호출되는 시점이 다르다.  
## 1) Filter는 Dispatcher servlet의 앞단에서 정보를 처리하고, Interceptor는 Dispatcher servlet에서 Handler(Controller)로 가기전에 정보를 처리한다.
## 2) 필터는 J2EE 표준 스펙에 정의되어 있는 기능이며, 인터셉터의 경우는 Spring Framework에서 자체적으로 제공하는 기능이라고 한다.
- 정확히 어떤 상황에 어떤 기능을 사용해야 하는가에 대해서는 갑론을박이 많지만, 인코딩이나 보안 관련 처리와 같은 web app의 전역적으로 처리
해야하는 로직은 필터로 구현하고, 클라이언트에서 들어오는 디테일한 처리(인증, 권한 등)에 대해서는 주로 인터셉터에서 처리하는듯함.

# IoC란 무엇인가?
- 인스턴스 생성의 제어를 개발자 본인이 아닌 다른 누군가에게 반환해 준다는 개념으로 여기서 말하는 다른 누군가는 Servlet과 같은 bean을 관리해주는 컨테이너이다.
즉, IoC란 인스턴스의 생성부터 소멸까지 개발자가 아닌 컨테이너가 대신 관리해 준다는 것이다.

# 스프링 부트와 스프링의 차이
- 스프링 부트는 스프링 프레임워크를 사용하는 프로젝트를 간편하게 셋업할 수 있는 서브 프로젝트이다. 독립 컨테이너에서 동작할 수 있기 때문에
embeded tomcat이 자동으로 실행됩니다. embeded contatiner에서 어플리케이션에서 실행시키기에는 다소 불안전하기 때문에 큰프로젝트에서는 사용
하지 않는 것이 좋다.
