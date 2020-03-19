**C语言课程设计报告**
姓名：闫靖雯，班级：软件193，学号：2019082328

**1.	题目**：矩阵函数包

**2.	要求**：矩阵的加法、减法、数乘、转置、求逆运算

**3.	设计思路**：
将每个算法：加法、减法、数乘、转置、取逆运算写成一个个函数，并且将输入矩阵的函数也写成函数，在主函数里调用，用户可根据自己的需要选择算法，求出矩阵。

**4.	数据结构**：
    用户输入的a[][]、b[][]以及最后求出的矩阵都是double双精度型的二维数组，转置运算以及求逆运算的结果矩阵c[][]以及中间所要求得矩阵，b[][]都是double双精度型，长度都为200，用户自己需要的矩阵的行数和列数n、m、k、g都是int整型，循环变量i、j、k等是int整型，转换的中间变量sum是double双精度型。




**5.功能介绍**：


 （1）void matrixadd（）矩阵加法函数
 用指针传入a矩阵与b矩阵的首地址double **a,double **b，在这之前已经在input函数中判断过两个矩阵的行数和列数，第一个矩阵的n和m与第二个矩阵的k和g是否相同，如果不相同则显示不能进行运算，如果相同则可以调用算法函数。进行赋值n==k,m==g,传入函数里的行和列就是n和m。之后每行每列两个矩阵的对应元素相加赋值给a[i][j]这个新的二维数组并用循环结构将其输出。

 （2）void matrixsubtract（）矩阵减法函数
 跟加法的运算步骤一样，只不过将a[i][j]与b[i][j]对应元素相减的结果赋值给a[i][j]并输出。如果选择3，进行矩阵的数乘运算，这时不用第二个矩阵，那么传入的形式就是double **a,int n,int m。

 （3）void matrixmultiply（）矩阵数乘函数
 在函数里用户自己输入要乘的数字，定义为double型储存在x中，用循环结构使每个元素都乘以x赋值给a[i][j]并输出。

 （4）void matrixtransposition（）矩阵转置函数
 和数乘同样的不需要第二个矩阵，则实参只是数组a与他的行数和列数n与m。在函数中需要定义一个空的二维数组，用来存放a矩阵转置之后的的新矩阵，用循环结构将a的行和列交换并赋值给 b数组输出。

 （5）void matrixinverse（）矩阵求逆函数
 除去某行某列元素，将每个代数余子式求出来保存在c中，再除以sum行列式，求出逆矩阵。

(6)double cauculate()求行列式函数
 除去第一行第一列元素，最后相加结果储存在sum中。

  (7)menu() 菜单函数
输入供用户选择的菜单，包括五种算法的选择。


**6.	遇到的问题及处理方式**：
（1）	做好输入函数后运行，发现输入矩阵只能是所有元素在一行上输出，缺少换行循环，修改后正常。
（2）	实参和形参传递不当，开始只是将a[][]与b[][]与行数和列数nm传入，发现一系列语法错误，之后便定义了空函数，但还没达到及格要求，便上网找教程并且向同学请教，学会了指针传入实参，例如double **a。
（3）	文件分割不当，先开始将文件分为两个即函数与主函数.不达要求，经过学习实例将文件分为了三个，函数头列表，各出数、主函数，但发现程序执行不了，又向同学请教便发现未了引用件，改过之后正常。




**7.总结与感悟**：
    经过这次实战，我发现自己各个模块基础薄着弱的地方, 比如说实参的传递，尤其是=维数组的函数实参传递，经过了网上 的学习与向同学请教，学会了指针传递。 并且对循环结构、判断语句以及之前的结构熟练掌握，并深一步的巩固了基础，也学会了一些其他算法, 比如对文件的引用。认识到自己 的不足。便要更加努力的学习c语言以及这学期的C++，使自己更熟练的运用各种算法，非富自己的知识储备，掌握自己的专业知识与技能，对自己负责。

