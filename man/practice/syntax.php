<?php
ini_set('display_errors', (int)1);
error_reporting(E_ALL);

$sam = "ananth";
$net = "web developer";
$age = "18";
printf("hello, my name is %s\n<br>", $sam);

printf("<br> hello, my name is<br> " . $sam);

?>

<?php
print "<br>Hello, i'm a beginer of " . $net . "<br>and my age " . $age;

echo "<br>just begining stage";

?>

<?php

$truevar = true;
$falsevar = false;

$stringvar = "TRUE";
printf("truevar: " . $truevar . "<br>\n");
printf("falsevar: " . $falsevar . "<br>\n");


printf($stringvar);
printf("%s is of type %s \n<br>", $stringvar, gettype($stringvar));

print('%falsevar is of type ' . gettype($falsevar) . "\n<br>");
print('%truevar is of type ' . gettype((int)$truevar) . "\n<br>"); // u can integer fill get output is integer

if(null == 0 and false == null and false ==0) {
    printf("NULL == 0 and false == NULL and false ==0\n");
}

if(1 ==(int)true) {
    print("1 == true ? it is  true \n" . (int)true);
} else {
    printf(" 0 == int(true) ?it is false \n" . (int)true);
}

//integers
$int1 = 34;
$int2 = -34;
$int3 = 067;
$int4 = 0xff;
$int5 = 0b11001010101000100;
print("$int3 <br>");
//all int try it
print($int5 + $int4 . "<br>");

//float (doubles)
$f1 = 2.4523;
printf("%.10f <br>\n", $f1);
$f2 = 2.3;
printf("$f2 <br>\n");

//arithmatics
$sum = 5 + 5;
$diff = 5 - 5;
$mul = 5 * 5;
$div = 5 / 5;

printf("$sum<br>\n");

//short arithmatics
$num = 0;
$num = $num + 1;
printf("$num<br>\n");
$num++;//c like syntax
printf("$num<br>\n");
$num += 1;//python liokr syntax
printf("$num<br>\n");
$num++;
printf("$num<br>\n");

//multi line syntax

$boundry = <<<BOUNDRY
hii
. <br>
. <br>
. <br> 
. <br>
. <br>
BOUNDRY;
$ananth = <<<ANANTH
my <br>
name <br>
is <br>
; <br>
; <br> $num
; <br>
; <br>
ANANTH;
$xml = <<<XML
 thi sis testing
XML;

print("$boundry<br>"); 
echo $xml;
//print(htmlentities($doc1));

//arrey
$arr = [1, 2, 3, 4, 5];
echo $arr[2];
$dummy_arr = [1, 2, 3, 4]; 

for($i=0; $i<5; $i++){
printf("%d \n", $arr[$i]);
}

$arr = [1, 2, 3, "string",012,true,0xff,$dummy_arr];

for($i=0; $i<count($arr); $i++){
    printf("%s \n", gettype($arr[$i]));
}

//Associative Arrays (not intexed, but they have keys)

$arr = [
    "one" => 1,
    "one" => 2.3,
    "three" =>"string",
    "three" =>"ananth",
    "four" => 012,
    "five" => 2323,
    6 => true,
    7 => 0xff,
    8 => $dummy_array
];

echo $arr["one"]."<br>\n";
echo $arr(0);
print_r($arr);
?>