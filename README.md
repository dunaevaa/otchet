# otchet 
Результаты работы программы:
B::foo
B::bar
A::baz
B::foo
B::bar
A::baz

Объяснение результатов:
В 26 строке мы динамически выделяем память под указатель типа А со значением типа В.
В 27 строке вызываем функцию foo в классе В, т.к. она переопределена в таблице виртуальных функций (A::foo -> B::foo), поэтому результатом этой функции 
