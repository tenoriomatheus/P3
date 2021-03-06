#ifndef RECURSOS_H
#define RECURSOS_H

#include <stdbool.h>

/* BEGIN STRUCTS */
typedef struct hora Hora;
typedef struct datahora DataHora;
typedef struct atividade Atividade;
typedef struct recurso Recurso;
typedef struct usuario Usuario;
typedef struct element Node;
typedef struct linkedlist LList;
typedef struct userlinkedlist ULList;
typedef struct userelement UNode;
/* END STRUCTS */

/* BEGIN USUARIO */
Usuario* Usuario_new();
void initUsuario(Usuario* user);
char* getNome(Usuario* user);
void setNome(Usuario* user, char* nome);
void setEmail(Usuario* user, char* email);
void setFuncao(Usuario* user, char* func);
void setAcesso(Usuario* user, int acess);
void setEmAndamento(Usuario* user);
bool isEmAndamento(Usuario* user);
/* END USUARIO */

/* BEGIN ATIVIDADE */
Atividade* Atividade_new();
void init_Atividade(Atividade* ativ);
void setTitulo(Atividade* ativ, char* titulo);
void setInfo(Atividade* ativ, char* info);
void setTipo(Atividade* ativ, char* tipo);
void setNumParticipantes(Atividade* ativ, int num);
void setNumMaterial(Atividade* ativ, int num);
void setParticipantes(Atividade* ativ, char* participantes[]);
void setMaterial(Atividade* ativ, char* materiais[]);
/* END ATIVIDADE */

/* BEGIN HORA */
Hora* Hora_new();
void setHora(Hora* hora, char* h);
void setMinutos(Hora* min, char* m);
void initHora(Hora* hora);
char* getHora(Hora* hora);
char* getMinuto(Hora* hora);
/* END HORA */

/* BEGIN DATAHORA */
DataHora* DataHora_new();
void setDia(DataHora* data, char* d);
void setMes(DataHora* data, char* m);
void setAno(DataHora* data, char* a);
void initDataHora(DataHora* data);
char* getDia(DataHora* data);
char* getMes(DataHora* data);
char* getAno(DataHora* data);
/* END DATAHORA */

/* BEGIN RECURSO */
Recurso* Recurso_new();
void initRecurso(Recurso* rec);
void setId(Recurso* rec, char* id);
void setResponsavel(Recurso* rec, char* resp);
void setStatus(Recurso* rec, char* stats);
Hora* getHoraD(DataHora* data);
DataHora* getInicio(Recurso* rec);
DataHora* getFim(Recurso* rec);
Atividade* getAtividade(Recurso* rec);
char* getId(Recurso* rec);
char* getResponsavel(Recurso* rec);
char* getStatus(Recurso* rec);
/* END RECURSO */

/* BEGIN LLIST(RECURSO) */
Node* Node_new();
void initNode();
LList* LList_new();
void msgError(const char* error);
void initLList(LList* list);
void appendR(Recurso* it, LList* list);
void nextR(LList* list);
void prevR(LList* list);
void beginR(LList* list);
void endR(LList* list);
void moveAtR(int pos, LList* list);
Recurso* removeR(LList* list);
int getSizeR(LList* list);
bool find(LList* list, char* id);
Recurso* getCurrentR(LList* list);
/* END LLIST(RECURSO) */

/* BEGIN LLIST(USUARIO) */
UNode* UNode_new();
void initUNode();
ULList* ULList_new();
void initULList(ULList* list);
void append(Usuario* it, ULList* list);
void next(ULList* list);
void prev(ULList* list);
void begin(ULList* list);
void end(ULList* list);
void moveAt(int pos, ULList* list);
Usuario* removeU(ULList* list);
int getSize(ULList* list);
Usuario* getVal(ULList* list);
bool findNome(ULList* list, char* name);
bool findEmail(ULList* list, char* email);
bool findFuncao(ULList* list, char* func);
Usuario* getCurrentU(ULList* list);
/* END LLIST(USUARIO) */

#endif // RECURSOS_H