#include <iostream>
#include <windows.h>
using namespace std;
string datos[7];
void adicionar();
string nombres[5],ApellidoP[5], apelldioM[5],cedula[5], estcivil[5],departamento[5], profesion[5];
void mostar();
void editar();
void suprimir();
string extranjeros[7];
void add();
string name[5],Appd[5],ApM [5],cedus[5],statu[5],pais[5],prode[5];
void show();
void edit();
void delet();

int main(){
    char res = 's';
    do{

        int opcion;
        system("cls");
        cout<<"----------------------USUARIOS NACIOANLES------------------: "<<endl;
        cout<<"1. Agregar nueva persona :"<<endl;
        cout<<"2. Ver registros de personas :"<<endl;
        cout<<"3. Modificar registro :"<<endl;
        cout<<"4. Eliminar regristro :"<<endl;
        cout<<"----------------------USUARIOS EXTRANJEROS---------------: "<<endl;
        cout<<"5. Agregar nueva persona :"<<endl;
        cout<<"6. Ver registros de personas :"<<endl;
        cout<<"7. Modificar registro :"<<endl;
        cout<<"8. Eliminar regristro :"<<endl;
        cout<<"9. Salir :"<<endl;
        cout<<"seleccionar una opcion: ";
        cin>>opcion;

        system("cls");

        switch(opcion)
        {
            case 1:
                adicionar();

                break;
            case 2:
                mostar();
                break;
            case 3:
                editar();
                break;
            case 4:
                suprimir();
                break;
            case 5:
                add();
                break;
            case 6:
                show();
                break;
            case 7:
                edit();
                break;
            case 8:
                delet();
                break;

            default:
                cout<<"--Opcion invalida--:"<<endl;
                break;
        }
        cout<<"--Desea continuar (s/n)--: ";
        cin>>res;
    }while(res == 's');

    return 0;
}
void adicionar(){
    system("cls");

    cout<<"-----------DIGITE USUARIOS A AGREGAR-----------: "<<endl;

   for(int i=1; i<5; i++){
        cout<<"posicion:"<<i<<":"<<endl;
        cout<<"---Ingrese nombre...................: ";
        cin>>nombres[i];
        cout<<"---Ingrese Apellido Paterno.........: ";
        cin>>ApellidoP[i];
        cout<<"---Ingresar apellido Materno........: ";
        cin>>apelldioM[i];
        cout<<"---Ingresar cedula de indentidad....: ";
        cin>>cedula[i];
        cout<<"---Ingrese estado civil.............: ";
        cin>>estcivil[i];
        cout<<"---Ingrese departamento.............: ";
        cin>>departamento[i];
        cout<<"---ingrese profesion................: ";
        cin>>profesion[i];
        cout<<"--------------------------------------"<<endl;
     }
}
void mostar(){
    system("cls");
     cout<<"-----------PERSONAS REGISTRADAS--------"<<endl;
     for(int i=1; i<5; i++){
        cout<<"posicion:"<<i<<":"<<endl;
        cout<<"Nombre-----------------------------------: "<<nombres[i]<<endl;
        cout<<"Apellido Paterno-------------------------: "<<ApellidoP[i]<<endl;
        cout<<"Apellido Materno-------------------------: "<<apelldioM[i]<<endl;
        cout<<"Cedula de identidad----------------------: "<<cedula[i]<<endl;
        cout<<"Estado civil-----------------------------: "<<estcivil[i]<<endl;
        cout<<"Departamento-----------------------------: "<<departamento[i]<<endl;
        cout<<"Profesion--------------------------------: "<<profesion[i]<<endl;
        cout<<"__________________________________________ "<<endl;

     }
}
void editar(){
    mostar();
    system("cls");
    cout<<"--------------SELECCIONAR POSICION A EDITAR---------: "<<endl;
    int posicion;
    string nuevo,AppN, ApmN,CeduN,Newstado,Newdepar, NewProfe;
    cout<<"ingrese la posicion: ";
    cin>>posicion;
    cout<<"ingresar nuevo Nombre...............: ";
    cin>>nuevo;
    cout<<"ingresar nuevo apellido Paterno.....: ";
    cin>>AppN;
    cout<<"Ingrese nuevo apellido Materno......: ";
    cin>>ApmN;
    cout<<"Ingresa nueva cedula de Indentidad..: ";
    cin>>CeduN;
    cout<<"Ingrese nuevo estado civil..........: ";
    cin>>Newstado;
    cout<<"Ingrese nuevo Departamento..........: ";
    cin>>Newdepar;
    cout<<"Ingrese nueva Profesion.............: ";
    cin>>NewProfe;
    nombres[posicion]=nuevo;
    ApellidoP[posicion]=AppN;
    apelldioM[posicion]=ApmN;
    cedula[posicion]=CeduN;
    estcivil[posicion]=Newstado;
    departamento[posicion]=Newdepar;
    profesion[posicion]=NewProfe;
    mostar();
}


void suprimir(){
    mostar();
    cout<<"--------------SELECCIONE LA POSICION A ELIMINAR-----------: "<<endl;
    int posicion;
    cout<<"ingrese la posicion: ";
    cin>>posicion;
    for(int i=1; i<5; i++){
        if(posicion==i){
            nombres[i]="";
            ApellidoP[i]="";
            apelldioM[i]="";
            cedula[i]="";
            estcivil[i]="";
            departamento[i]="";
            profesion[i]="";
        }
    }
    mostar();
}
void add(){
    system("cls");

    cout<<"-----------DIGITE USUARIOS EXTRANJEROS A AGREGAR-----------: "<<endl;

   for(int i=1; i<5; i++){
        cout<<"posicion:"<<i<<":"<<endl;
        cout<<"---Ingrese nombre...................: ";
        cin>>name[i];
        cout<<"---Ingrese Apellido Paterno.........: ";
        cin>>Appd[i];
        cout<<"---Ingresar apellido Materno........: ";
        cin>>ApM [i];
        cout<<"---Ingresar cedula de indentidad....: ";
        cin>>cedus[i];
        cout<<"---Ingrese estado civil.............: ";
        cin>>statu[i];
        cout<<"---Ingrese pais.....................: ";
        cin>>pais[i];
        cout<<"---ingrese profesion................: ";
        cin>>prode[i];
        cout<<"--------------------------------------"<<endl;
     }

}
void show(){
    system("cls");
     cout<<"-----------PERSONAS  EXTRANJERAS REGISTRADAS--------"<<endl;
     for(int i=1; i<5; i++){
        cout<<"posicion:"<<i<<":"<<endl;
        cout<<"Nombre-----------------------------------: "<<name[i]<<endl;
        cout<<"Apellido Paterno-------------------------: "<<Appd[i]<<endl;
        cout<<"Apellido Materno-------------------------: "<<ApM[i]<<endl;
        cout<<"Cedula de identidad----------------------: "<<cedus[i]<<endl;
        cout<<"Estado civil-----------------------------: "<<statu[i]<<endl;
        cout<<"Pais-------------------------------------: "<<pais[i]<<endl;
        cout<<"Profesion--------------------------------: "<<prode[i]<<endl;
        cout<<"__________________________________________ "<<endl;

     }
}
void edit(){
    show();
    system("cls");
    //system("pause");
    cout<<"--------------SELECCIONAR POSICION A EDITAR---------: "<<endl;
    int posicion;
    string nuvos,Appn, Apmn,Cedun,Newtados,Newepars, Newrofes;
    cout<<"ingrese la posicion: ";
    cin>>posicion;
    cout<<"ingresar nuevo Nombre...............: ";
    cin>>nuvos;
    cout<<"ingresar nuevo apellido Paterno.....: ";
    cin>>Appn;
    cout<<"Ingrese nuevo apellido Materno......: ";
    cin>>Apmn;
    cout<<"Ingresa nueva cedula de Indentidad..: ";
    cin>>Cedun;
    cout<<"Ingrese nuevo estado civil..........: ";
    cin>>Newtados;
    cout<<"Ingrese pais........................: ";
    cin>>Newepars;
    cout<<"Ingrese nueva Profesion.............: ";
    cin>>Newrofes;

    name[posicion]=nuvos;
    Appd[posicion]=Appn;
    ApM[posicion]=Apmn;
    cedus[posicion]=Cedun;
    statu[posicion]=Newtados;
    pais[posicion]=Newepars;
    prode[posicion]=Newrofes;
    show();
}
void delet(){
    show();
    cout<<"--------------SELECCIONE LA POSICION A ELIMINAR-----------: "<<endl;
    int posicion;
    cout<<"ingrese la posicion: ";
    cin>>posicion;
    for(int i=1; i<5; i++){
        if(posicion==i){
            name[i]="";
            Appd[i]="";
            ApM[i]="";
            cedus[i]="";
            statu[i]="";
            pais[i]="";
            prode[i]="";
        }
    }
    show();
}


