#! /bin/bash

#
#	tester created by non other than the world conqueror himself
#	the myth, the legend.... drumroll... Willem Smith, A.k.a John
#	A.k.a, A.k.a with indentations... Will
#
#	Enjoy the simple tester and conquer this project
#

mkdir -p log
printf "\n\tSed is for losers test\n\n"
if [ -e ../ex04/sedForLosers ]
then
	printf "\x1B[32m\texecutable exists\n\trunning...\x1B[0m\n\n"
else
	printf "\tmaking executable...\x1B[0m\n"
	make re -C ../ex04/ > log/program.log
	printf "\x1B[32m\trunning...\x1B[0m\n\n"
fi

#
#	run tests after executable has been made or found to exist
#

# test 1:
sleep 1
../ex04/replace test1 hello hi >> log/program.log
sleep 1
printf "\x1B[35mtest\x1B[0m ->"
if [ -e test1.replace ]
then
	myVar="$(cat test1 | grep "hello" -o | wc -l )"
	myVar2="$(cat test1.replace | grep "hi" -o | wc -l )"
	myVar3="$(cat test1 | wc -w)"
	myVar4="$(cat test1.replace | wc -w)"
	if [ "$myVar" = "$myVar2" ] && [ "$myVar3" = "$myVar4" ]
	then
		printf " [\x1B[32mok\x1B[0m]"
	else
		printf " [\x1B[31mfail\x1B[0m]"
	fi
else
	printf " [\x1B[31mfail\x1B[0m]"
fi

#
#	Second test cuz we like to be extreme ;)
#

# test 2:
sleep 1
../ex04/replace test2 bob Jackdaniels >> log/program.log
sleep 1

if [ -e test2.replace ]
then
	myVar="$(cat test2 | grep "bob" -o | wc -l )"
	myVar2="$(cat test2.replace | grep "Jackdaniels" -o | wc -l )"
	myVar3="$(cat test2 | wc -w)"
	myVar4="$(cat test2.replace | wc -w)"
	if [ "$myVar" = "$myVar2" ] && [ "$myVar3" = "$myVar4" ]
	then
		printf " [\x1B[32mok\x1B[0m]"
	else
		printf " [\x1B[31mfail\x1B[0m]"
	fi
else
	printf " [\x1B[31mfail\x1B[0m]"
fi

printf "\n\n"

rm -f test1.replace
rm -f test2.replace
make fclean -C ../ex04 >> log/program.log