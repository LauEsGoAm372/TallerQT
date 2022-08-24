/***************************************
 * Fecha: 23 de agosto de 2022
 * Autor: Laura Gomez, PHD
 * Tema:Taller eigen
 * Materia: introduccion a la HPC
 * ************************************/
#include <iostream>
#include <eigen3/Eigen/Dense> /* se hace uso de la biblioteca Eigen Dense*/

/********Se crean los tipos de datos personalizados*****/
/*Tipo de dato personalizado en este caso matriz 2*2 int*/
typedef Eigen::Matrix<int,2,3>  MiMatrizi2x3i;
typedef Eigen::Matrix<int,2,2>  MiMatrizi2x2i;
typedef Eigen::Matrix<int,3,3>  MiMatrizi3x3i;
typedef Eigen::Matrix<float,2,2>  MiMatrizd2x2f;
typedef Eigen::Matrix<double,2,2>  MiMatrizd2x2d;
typedef Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic> MiMatrizd;
using namespace std;

void problema1(){

    std::cout << "\n********* Problema a) **********+" << std::endl;
    /*Se requiere declarar 3 matrices enteras 2x2, que corresponden a la matriz A, B y X*/
    Eigen::Matrix2i matrizA;   /*el tipo de dato es matrix2i*/
    Eigen::Matrix2i matrizB;
    Eigen::Matrix2i matrizX;

    /*Se llena la matriz A de forma artesanal*/
    matrizA << 4,-2,1,-7;
    std::cout << "\n Matriz A\n"<<matrizA << std::endl;

    /*Se llena la matriz B de forma artesanal*/
    matrizB << -1,2,6,-5;
    std::cout << "\n Matriz B\n" <<matrizB << std::endl;


    /*Se llena la matriz X como el resultado de la operaciòn 3A-4B*/
    matrizX=(3*matrizA)-(4*matrizB);
    std::cout << "\n Matriz X= 3A-4B\n" <<matrizX << std::endl;
}

void problema2(){

    std::cout << "\n*********  Problema b) **********+" << std::endl;
    /*Se requiere declarar 3 matrices flotantes 2x2, que corresponden a la matriz A, B y X*/
    Eigen::Matrix2f matrizA;   /*el tipo de dato es matrix2f*/
    Eigen::Matrix2f matrizB;
    Eigen::Matrix2f matrizX;

    /*Se llena la matriz A de forma artesanal*/
    matrizA << 0,-1,2,1;
    std::cout << "\n Matriz A\n"<<matrizA << std::endl;

    /*Se llena la matriz B de forma artesanal*/
    matrizB << 1,2,3,4;
    std::cout << "\n Matriz B\n" <<matrizB << std::endl;


    /*Se llena la matriz X como el resultado de la operaciòn (3BA - 4A)/2 */
    matrizX=((3*matrizB*matrizA)-(4*matrizA))/2;
    std::cout << "\n Matriz X =(3BA - 4A)/2\n" <<matrizX << std::endl;

}


void problema4(){

    std::cout << "\n********* Problema d) **********+" << std::endl;
    /*Se requiere declarar 3 matrices flotantes 2x2, que corresponden a la matriz A, B  y X*/
    Eigen::Matrix2d matrizA;
    Eigen::Matrix2d matrizB;
    Eigen::Matrix2d matrizX;


    /*Se llena la matriz A de forma artesanal*/
    matrizA << 2,1,-4,-3;
    std::cout << "\n Matriz A\n"<<matrizA << std::endl;

    /*Se llena la matriz B de forma artesanal*/
    matrizB << 2,2,6,4;
    std::cout << "\n Matriz B\n" <<matrizB << std::endl;

    /*Se llena la matriz X como el resultado de la operaciòn X= B*A^⁻1  */
    matrizX=matrizB*matrizA.inverse();
    std::cout << "\n Matriz X= B*A^⁻1\n" <<matrizX << std::endl;

}
void problema5(){

    std::cout << "\n********* Problema e) **********+" << std::endl;
    /*Se requiere declarar 4 matrices enteras 2x2, que corresponden a la matriz A, B, C  y X*/
    Eigen::Matrix3d matrizA;
    Eigen::Matrix2d matrizB;
    Eigen::Matrix2d matrizC;
    Eigen::Matrix2d matrizX;

    /*Se llena la matriz A de forma artesanal*/
    matrizA << -3,-2,3,3;
    std::cout << "\n Matriz A\n"<<matrizA << std::endl;

    /*Se llena la matriz B de forma artesanal*/
    matrizB << 5,3,9,4;
    std::cout << "\n Matriz B\n" <<matrizB << std::endl;

    /*Se llena la matriz C de forma artesanal*/
    matrizC << 1,1,0,0;
    std::cout << "\n Matriz B\n" <<matrizC << std::endl;

    /*Se llena la matriz X como el resultado de la operaciòn C/AB^T  */


    //std::cout << "\n Matriz X =C/AB^T\n" <<matrizX << std::endl;

}

void problema6(){

    std::cout << "\n********* Problema f) **********+" << std::endl;
    /*Se requiere declarar 3 matrices flotantes 3x3, que corresponden a la matriz A, B  y X*/
    Eigen::Matrix3d matrizA;
    Eigen::Matrix3d matrizB;
    Eigen::Matrix3d matrizX;


    /*Se llena la matriz A de forma artesanal*/
    matrizA << 1,5,-1,-1,2,2,0,-3,3;
    std::cout << "\n Matriz A\n"<<matrizA << std::endl;

    /*Se llena la matriz B de forma artesanal*/
    matrizB << -1,-4,3,1,-2,-2,-3,3,-5;
    std::cout << "\n Matriz B\n" <<matrizB << std::endl;

    /*Se llena la matriz X como el resultado de la operaciòn X= A+3B  */
    matrizX=matrizA+(3*matrizB);
    std::cout << "\n Matriz X= A+3B \n" <<matrizX << std::endl;

}
void problema7(){

    std::cout << "\n********* Problema g) **********+" << std::endl;
    /*Se requiere declarar 3 matrices flotantes 3x3, que corresponden a la matriz A, B  y X*/
    Eigen::Matrix3d matrizA;
    Eigen::Matrix3d matrizB;
    Eigen::Matrix3d matrizX;


    /*Se llena la matriz A de forma artesanal*/
    matrizA << 2,7,3,3,9,4,1,5,3;
    std::cout << "\n Matriz A\n"<<matrizA << std::endl;

    /*Se llena la matriz B de forma artesanal*/
    matrizB << 1,0,2,0,1,0,0,0,1;
    std::cout << "\n Matriz B\n" <<matrizB << std::endl;

    /*Se llena la matriz X como el resultado de la operaciòn X= B*A^⁻1  */
    matrizX=matrizB*matrizA.inverse();
    std::cout << "\n Matriz X= B*A^⁻1\n" <<matrizX << std::endl;

}
void problema8(){

    std::cout << "\n********* Problema h) **********+" << std::endl;
    /*Se requiere declarar 3 matrices flotantes 3x3, que corresponden a la matriz A, B  y X*/
    Eigen::Matrix3d matrizA;
    Eigen::Matrix3d matrizB;
    Eigen::Matrix3d matrizX;


    /*Se llena la matriz A de forma artesanal*/
    matrizA <<1,1,1,6,5,4,13,10,8;
    std::cout << "\n Matriz A\n"<<matrizA << std::endl;

    /*Se llena la matriz B de forma artesanal*/
    matrizB << 0,1,2,1,0,2,1,2,0;
    std::cout << "\n Matriz B\n" <<matrizB << std::endl;

    /*Se llena la matriz X como el resultado de la operaciòn X= B*A^⁻1  */
    matrizX=matrizB*matrizA.inverse();
    std::cout << "\n Matriz X= B*A^⁻1\n" <<matrizX << std::endl;

}
void problema9(){

    std::cout << "\n********* Problema i) **********+" << std::endl;
    /*Se requiere declarar 1 matriz flotante 2x2, que corresponden a la matriz A*/
    Eigen::Matrix2d matrizA;
    Eigen::Matrix2d matrizX;


    /*Se llena la matriz A de forma artesanal*/
    matrizA <<3,-1,0,2;
    std::cout << "\n Matriz A\n"<<matrizA << std::endl;

    /*Se llena la matriz X como el resultado de la operaciòn X= A^t*A-2A  */
    matrizX=(matrizA.transpose()*matrizA)-(2*matrizA);
    std::cout << "\n Matriz X= A^t*A-2A\n" <<matrizX << std::endl;

}
void problema10(){

    std::cout << "\n********* Problema j) **********+" << std::endl;
    /*Se requiere declarar 1 matriz flotante 2x2, que corresponden a la matriz A*/
    Eigen::Matrix2i matrizA;
    Eigen::Matrix2i matrizX;


    /*Se llena la matriz A de forma artesanal*/
    matrizA <<4,2,-1,0;
    std::cout << "\n Matriz A\n"<<matrizA << std::endl;

    /*Se llena la matriz X como el resultado de la operaciòn X= A^3  */
    matrizX= matrizA*matrizA*matrizA;
    std::cout << "\n Matriz X= A^3\n" <<matrizX << std::endl;

}

void problema12(){

    std::cout << "\n********* Problema l) **********+" << std::endl;
    /*Se requiere declarar 4 matrices flotantes 2x2, que corresponden a la matriz A, B, C  y X*/
    Eigen::MatrixXf mDinamicaA = Eigen::MatrixXf::Random(2,3);
    Eigen::MatrixXf mDinamicaB = Eigen::MatrixXf::Random(3,2);
    Eigen::MatrixXf mDinamicax = Eigen::MatrixXf::Random(3,2);

    /*Se llena la matriz A de forma artesanal*/
    mDinamicaA << 1,0,-2,2,-1,3;
    std::cout << "\n Matriz A\n"<<mDinamicaA  << std::endl;

    /*Se llena la matriz B de forma artesanal*/
    mDinamicaB << 2,-3,-2,0,-1,-2;
    std::cout << "\n Matriz B\n" <<mDinamicaB << std::endl;


    /*Se llena la matriz X como el resultado de la operaciòn AA^T-2AB  */
     mDinamicax=((mDinamicaA*mDinamicaA.transpose())-(2*mDinamicaA*mDinamicaB));

    std::cout << "\n Matriz X =AA^T-2AB\n" <<mDinamicax << std::endl;

}
void problema13(){

    std::cout << "\n********* Problema m) **********+" << std::endl;
    /*Se requiere declarar 4 matrices Dinàmicas , que corresponden a la matriz A, B, C  y X*/
    Eigen::MatrixXf mDinamicaA = Eigen::MatrixXf::Random(1,3);
    Eigen::MatrixXf mDinamicaB = Eigen::MatrixXf::Random(3,2);
    Eigen::MatrixXf mDinamicaC = Eigen::MatrixXf::Random(3,2);
    Eigen::MatrixXf mDinamicax = Eigen::MatrixXf::Random(2,1);


    /*Se llena la matriz A de forma artesanal*/
    mDinamicaA << 4,8,12;
    std::cout << "\n Matriz A\n"<<mDinamicaA  << std::endl;

    /*Se llena la matriz B de forma artesanal*/
    mDinamicaB << 3,2,0,1,-1,0;
    std::cout << "\n Matriz B\n" <<mDinamicaB << std::endl;

    mDinamicaC << 3,-1;
    std::cout << "\n Matriz B\n" <<mDinamicaC << std::endl;
    /*Se llena la matriz X como el resultado de la operaciòn  */
     mDinamicax=mDinamicaA*mDinamicaB*mDinamicaC;

    std::cout << "\n Matriz X \n" <<mDinamicax << std::endl;

}
void problema14(){

    std::cout << "\n********* Problema n) **********+" << std::endl;
    /*Se requiere declarar 3 matrices flotantes 3x3, que corresponden a la matriz A, B  y X*/
    Eigen::Matrix3d matrizA;
    Eigen::Matrix3d matrizB;
    Eigen::Matrix3d matrizX;


    /*Se llena la matriz A de forma artesanal*/
    matrizA << 3,4,1,-1,-3,3,2,3,0;
    std::cout << "\n Matriz A\n"<<matrizA << std::endl;

    /*Se llena la matriz B de forma artesanal*/
    matrizB << 3,9,7,1,11,7,7,5,7;
    std::cout << "\n Matriz B\n" <<matrizB << std::endl;

    /*Se llena la matriz X como el resultado de la operaciòn X */
    matrizX=matrizB*matrizA.transpose();
    std::cout << "\n Matriz X" <<matrizX << std::endl;

}
void problema15(){

    std::cout << "\n********* Problema p) **********+" << std::endl;
    /*Se requiere declarar 4 matrices Dinàmicas , que corresponden a la matriz A, B, C  y X*/
    Eigen::Matrix4d matrizA;
    Eigen::Matrix4d matrizB;
    Eigen::Matrix4d matrizx;

    /*Se llena la matriz A de forma artesanal*/
    matrizA << 1,1,1,1,1,1,-1,-1,1,-1,1,-1,1,-1,-1,1;
    std::cout << "\n Matriz A\n"<<matrizA  << std::endl;

    /*Se llena la matriz B de forma artesanal*/
    matrizB << 1,1,0,0,1,0,1,0,1,0,0,1,1,0,1,1;
    std::cout << "\n Matriz B\n" <<matrizB << std::endl;


    /*Se llena la matriz X como el resultado de la operaciòn   */
     matrizx=matrizB*matrizA.inverse();

    std::cout << "\n Matriz \n" <<matrizx << std::endl;

}
void problema16(){

    std::cout << "\n********* Problema o) **********+" << std::endl;
    /*Se requiere declarar 3 matrices flotantes 3x3, que corresponden a la matriz A, B  y X*/
    Eigen::Matrix3d matrizA;   /*el tipo de dato es matrix2f*/
    Eigen::Matrix3d matrizB;
    Eigen::Matrix3d matrizX;


    /*Se llena la matriz A de forma artesanal*/
    matrizA << 2,5,7,6,3,4,5,-2,-3;
    std::cout << "\n Matriz A\n"<<matrizA << std::endl;

    /*Se llena la matriz B de forma artesanal*/
    matrizB << -1,1,0,0,1,1,1,0,-1;
    std::cout << "\n Matriz B\n" <<matrizB << std::endl;

    /*Se llena la matriz X como el resultado de la operaciòn X  */
    matrizX=matrizB*matrizA.inverse();
    std::cout << "\n Matriz X\n" <<matrizX << std::endl;

}
void problema17(){

    std::cout << "\n********* Problema m) **********+" << std::endl;
    /*Se requiere declarar 4 matrices flotantes 2x2, que corresponden a la matriz A, B, C  y X*/
    Eigen::MatrixXf mDinamicaA = Eigen::MatrixXf::Random(1,3);
    Eigen::MatrixXf mDinamicaB = Eigen::MatrixXf::Random(3,2);
    Eigen::MatrixXf mDinamica = Eigen::MatrixXf::Random(2,1);
    Eigen::MatrixXf mDinamicaX = Eigen::MatrixXf::Random(1,0);
    /*Se llena la matriz A de forma artesanal*/
    mDinamicaA <<4,8,12;
    std::cout << "\n Matriz A\n"<<mDinamicaA  << std::endl;

    /*Se llena la matriz B de forma artesanal*/
    mDinamicaB << 3,2,0,1,-1,0;
    std::cout << "\n Matriz B\n" <<mDinamicaB << std::endl;

    mDinamica << 3,-1;
    std::cout << "\n Matriz C\n" <<mDinamica << std::endl;
    /*Se llena la matriz X como el resultado de la operaciòn AA^T-2AB  */
     mDinamicax=(mDinamicaA*mDinamica*mDinamicaB);

    std::cout << "\n Matriz X \n" <<mDinamicax << std::endl;

}
int main()
{


       problema1();
       problema2();
       problema4();
       problema6();
       problema7();
       problema8();
       problema9();
       problema10();
       problema12();
       problema14();
       problema15();
       problema16();
       problema17();
        return 0;
}

