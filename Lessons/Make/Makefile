#<цели>: <реквизиты>
#	<команда #1>
#	...
#	<команда #n>
# @ - запрет показа выполняемых команд
#MAIN: main.cpp
# Цель выполнится в порядке очерёдности. Если нужен make с определённой целью,
# то make all например
build: main.cpp # параметры сборки
	clang++ -Wall main.cpp -o main.bin

test:
	@cppcheck --enable=all --suppress=missingIncludeSystem . main.cpp

run:
	./main.bin