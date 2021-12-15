#include<iostream>  //para 	cout o cin
#include<conio.h>   //para 	getch();
#include<stdlib.h>  //para 	system("PAUSE");
using namespace std;
main ()
{
	int Opc, idioma;//sera la opcion de elegir
	int Salir;//indica el momento para salir del programa
	char respuesta,repetir;
	int contap=0,contan=0,contador=0;
			cout <<"\n\n Seleccione un idioma\n\n\n";
			cout<<"1-Español\n";
			cout<<"2-Ingles\n";
			cout<<"3-Aleman\n";
			cin>>idioma;	 
			if (idioma==1)
				{ 
				cout<<"Estas en idioma-Español\n";
				do
				{
						contap=0;
						contan=0;
						cout<< "Modulos"<<endl;
						cout<< "1)Manejo de tecnicas de programacion"<<endl;
						cout<< "2)Comunicacion en los ambitos escolar y profesional"<<endl;
						cout<< "3)Interaccion inicial en ingles"<<endl;
						cout<< "4)Aplicacion de matematicas discretas"<<endl;
						cout<< "5)Mantenimiento de equipo de computo basico"<<endl;
						cout<< "6)Representacion simbolica y angular del entorno"<<endl;
						cout<< "7)Identificacion de la biodiversidad"<<endl;
						cout<< "8)Analisis de la materia y la energia"<<endl;
						cout<< "9)Manejo de aplicaciones por medios digitales"<<endl;
						cout<< "10)Salir"<<endl;
						cout<<"Dame otra opcion(rango 1-10)"<<endl;
						cin>>Opc;
						switch (Opc) 
							{
								case 1: // Modulo a
									cout<<"Manejo de tecnicas de programacion"<<endl; 
									cout<<"1-¿Que es programacion?"<<endl;
									cout<<"a)diseñar, depurar, codificar y mantener un codigo"<<endl;
									cout<<"b)Un conjunto de programas"<<endl;
									cout<<"c)Secuencia de operaciones en un determinado orden"<<endl;
									cout<<"d)Se usa para resolver un problema"<<endl;
									cin>>respuesta;
								    if(respuesta=='a')
										{
									  		cout<<"la respuesta es correcta1"<<endl;
									  		contap=contap+1;
								    	}
									else
										{
											cout<<"La respuesta es incorrecta1"<<endl;
											contan=contan+1;
										}	
											cout<<"2-¿Que es un algoritmo?"<<endl;
											cout<<"a)Es la forma para resolver un problema"<<endl;
											cout<<"b)Un conjunto de criterios para evaluar"<<endl;
											cout<<"c)Enlista opciones"<<endl;
											cout<<"d)Indica el orden de realizacion"<<endl;
											cin>>respuesta;	
								    if(respuesta=='a')
										{
											cout<<"la respuesta es correcta2"<<endl;
											contap=contap+1;
									    }
									else
										{
											cout<<"La respuesta es incorrecta2"<<endl; 
											contan=contan+1;
										}
											cout<<"¿3-¿Cuales son las fases del ciclo de vida del Software?"<<endl;
											cout<<"a)Mantenimiento y evolucion, Identificacion de necesidades"<<endl;
											cout<<"b)Validación, analisis y diseño"<<endl;
											cout<<"c)Pruebas y codificacion"<<endl;
											cout<<"d)Todas las anteriores"<<endl;
											cin>>respuesta;	
								    if(respuesta=='d')
									    {
									    	cout<<"la respuesta es correcta3"<<endl;
									    	contap=contap+1;
									    }
									else
										{
									    	cout<<"La respuesta es incorrecta3"<<endl; 
											contan=contan+1;
									    }
									    	cout<<"4-¿Identificacion de Necesidades:¿Cuales son las fases para plantear un problema?"<<endl;
											cout<<"a)Establecer y Listar"<<endl;
											cout<<"b)Validar, Analizar y Diseñar"<<endl;
											cout<<"c)Establecer, Listar, Recabar, Evaluar"<<endl;
											cout<<"d)Ninguna"<<endl;
											cin>>respuesta;
									if(respuesta=='a')
										{
									    	cout<<"la respuesta es correcta"<<endl;	
									    	contap=contap+1;
									    } 
									else
										{
									    	cout<<"La respuesta es incorrecta"<<endl;
									    	contan=contan+1;
									    }
									    cout<<"5-¿Que es establecer?"<<endl;
											cout<<"a)Las oportunidades a partir de los criterios que se establezcan"<<endl;
											cout<<"b)Datos e informacion para cada oportunidad y garantizar una decision"<<endl;
											cout<<"c)Listar opciones que seran la base de cada oportunidad"<<endl;
											cout<<"d)Conjunto de criterios para evaluar las oportunidades, si se adecua con requerimiento del cliente"<<endl;
											cin>>respuesta;
									if(respuesta=='b')
										{
									    	cout<<"la respuesta es correcta"<<endl;
									    	contap=contap+1;
									    }
									else
										{
									    	cout<<"La respuesta es incorrecta"<<endl; 
									    	contan=contan+1;	
									    }
									    	cout<<"6-¿Que es Listar?"<<endl;
											cout<<"a)Conjunto de criterios para evaluar las oportunidades, si se adecua con requerimiento del cliente"<<endl;
											cout<<"b)Listar opciones que seran la base de cada oportunidad"<<endl;
											cout<<"c)Datos e informacion para cada oportunidad y garantizar una decision"<<endl;
											cout<<"d)Las oportunidades a partir de los criterios que se establezcan"<<endl;
											cin>>respuesta;
									if(respuesta=='b')
										{
									    	cout<<"la respuesta es correcta"<<endl;
									    	contap=contap+1;
									    }
									else
										{
									    	cout<<"La respuesta es incorrecta"<<endl;
									    	contan=contan+1;	
								    	} 
								break;	
							case 2: cout<<endl<<"todavia estoy en construccion"<<endl<<endl;
								break;
							case 10: exit(0);
								break;
							default:cout<<endl<<endl<<"No hay opciom"<<endl<<endl;
								break;
							//system ("pause");	//getch();	
							}	
						cout<<"Las respuestas correctas fueron "<<contap<<endl;
						cout<<"Las respuestas incorrectas fueron "<<contan<<endl;
							if(contador<2)
								{
									cout<<"deseas repetir la prueba? s/n"<<endl<<endl;
									cin>>repetir;
								}
						contador=contador+1;
				}
				while((contap<5) && (repetir=='s') && (contador<2));
				}					
				else
				if(idioma==2)
				{
					cout<<"Estas en idioma- Ingles "<<endl;
				}
				else
				if(idioma==3)
				{
					cout<<"Estas en idioma- Aleman "<<endl;
				}	
				else
				{
					cout<<"Estas en idioma- desconocido "<<endl;	
				}
}
