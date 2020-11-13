#ifndef TplMain__H
#define TplMain__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#ifdef __cplusplus
extern "C" {
#endif
extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;
extern struct record_description Gettext_TranslatableContent_gettext__desc;
extern struct record_description SourceInfo_SOURCEINFO__desc;
extern struct record_description Tpl_BlockType_BT__ANCHOR__desc;
extern struct record_description Tpl_BlockType_BT__INDENT__desc;
extern struct record_description Tpl_IterOptions_ITER__OPTIONS__desc;
extern struct record_description Tpl_StringToken_ST__LINE__desc;
extern struct record_description Tpl_StringToken_ST__NEW__LINE__desc;
extern struct record_description Tpl_StringToken_ST__STRING__desc;
extern struct record_description Tpl_StringToken_ST__STRING__LIST__desc;
extern struct record_description Tpl_Text_MEM__TEXT__desc;
extern struct record_description TplAbsyn_ASTDef_AST__DEF__desc;
extern struct record_description TplAbsyn_ExpressionBase_BOUND__VALUE__desc;
extern struct record_description TplAbsyn_ExpressionBase_ESCAPED__desc;
extern struct record_description TplAbsyn_ExpressionBase_FUN__CALL__desc;
extern struct record_description TplAbsyn_ExpressionBase_LITERAL__desc;
extern struct record_description TplAbsyn_ExpressionBase_MAP__desc;
extern struct record_description TplAbsyn_ExpressionBase_MATCH__desc;
extern struct record_description TplAbsyn_ExpressionBase_STR__TOKEN__desc;
extern struct record_description TplAbsyn_ExpressionBase_TEMPLATE__desc;
extern struct record_description TplAbsyn_GenInfo_GI__TEMPL__FUN__desc;
extern struct record_description TplAbsyn_MMDeclaration_MM__FUN__desc;
extern struct record_description TplAbsyn_MMDeclaration_MM__IMPORT__desc;
extern struct record_description TplAbsyn_MMDeclaration_MM__LITERAL__DECL__desc;
extern struct record_description TplAbsyn_MMDeclaration_MM__STR__TOKEN__DECL__desc;
extern struct record_description TplAbsyn_MMExp_MM__ASSIGN__desc;
extern struct record_description TplAbsyn_MMExp_MM__FN__CALL__desc;
extern struct record_description TplAbsyn_MMExp_MM__IDENT__desc;
extern struct record_description TplAbsyn_MMExp_MM__MATCH__desc;
extern struct record_description TplAbsyn_MMExp_MM__STRING__desc;
extern struct record_description TplAbsyn_MMExp_MM__STR__TOKEN__desc;
extern struct record_description TplAbsyn_MMPackage_MM__PACKAGE__desc;
extern struct record_description TplAbsyn_MatchingExp_BIND__AS__MATCH__desc;
extern struct record_description TplAbsyn_MatchingExp_BIND__MATCH__desc;
extern struct record_description TplAbsyn_MatchingExp_NONE__MATCH__desc;
extern struct record_description TplAbsyn_MatchingExp_RECORD__MATCH__desc;
extern struct record_description TplAbsyn_MatchingExp_REST__MATCH__desc;
extern struct record_description TplAbsyn_MatchingExp_SOME__MATCH__desc;
extern struct record_description TplAbsyn_MatchingExp_STRING__MATCH__desc;
extern struct record_description TplAbsyn_MatchingExp_TUPLE__MATCH__desc;
extern struct record_description TplAbsyn_PathIdent_IDENT__desc;
extern struct record_description TplAbsyn_PathIdent_PATH__IDENT__desc;
extern struct record_description TplAbsyn_TemplPackage_TEMPL__PACKAGE__desc;
extern struct record_description TplAbsyn_TemplateDef_TEMPLATE__DEF__desc;
extern struct record_description TplAbsyn_TypeInfo_TI__ALIAS__TYPE__desc;
extern struct record_description TplAbsyn_TypeInfo_TI__FUN__TYPE__desc;
extern struct record_description TplAbsyn_TypeInfo_TI__UNION__TYPE__desc;
extern struct record_description TplAbsyn_TypeSignature_BOOLEAN__TYPE__desc;
extern struct record_description TplAbsyn_TypeSignature_INTEGER__TYPE__desc;
extern struct record_description TplAbsyn_TypeSignature_LIST__TYPE__desc;
extern struct record_description TplAbsyn_TypeSignature_NAMED__TYPE__desc;
extern struct record_description TplAbsyn_TypeSignature_OPTION__TYPE__desc;
extern struct record_description TplAbsyn_TypeSignature_REAL__TYPE__desc;
extern struct record_description TplAbsyn_TypeSignature_STRING__TYPE__desc;
extern struct record_description TplAbsyn_TypeSignature_TEXT__TYPE__desc;
extern struct record_description TplAbsyn_TypeSignature_TUPLE__TYPE__desc;
extern struct record_description TplMain_Exp_BINARY__desc;
extern struct record_description TplMain_Exp_ICONST__desc;
extern struct record_description TplMain_Exp_VARIABLE__desc;
extern struct record_description TplMain_Operator_LESS__desc;
extern struct record_description TplMain_Operator_PLUS__desc;
extern struct record_description TplMain_Operator_TIMES__desc;
extern struct record_description TplMain_Statement_ASSIGN__desc;
extern struct record_description TplMain_Statement_WHILE__desc;
extern struct record_description TplParser_LineInfo_LINE__INFO__desc;
extern struct record_description TplParser_ParseInfo_PARSE__INFO__desc;
DLLExport
modelica_metatype omc_TplMain_intMatrix(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _i_lstOfLst);
#define boxptr_TplMain_intMatrix omc_TplMain_intMatrix
static const MMC_DEFSTRUCTLIT(boxvar_lit_TplMain_intMatrix,2,0) {(void*) boxptr_TplMain_intMatrix,0}};
#define boxvar_TplMain_intMatrix MMC_REFSTRUCTLIT(boxvar_lit_TplMain_intMatrix)
#define boxptr_TplMain_lm__55 omc_TplMain_lm__55
#define boxptr_TplMain_lm__54 omc_TplMain_lm__54
DLLExport
modelica_metatype omc_TplMain_oper(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_i_it);
#define boxptr_TplMain_oper omc_TplMain_oper
static const MMC_DEFSTRUCTLIT(boxvar_lit_TplMain_oper,2,0) {(void*) boxptr_TplMain_oper,0}};
#define boxvar_TplMain_oper MMC_REFSTRUCTLIT(boxvar_lit_TplMain_oper)
DLLExport
modelica_metatype omc_TplMain_exp(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_i_it);
#define boxptr_TplMain_exp omc_TplMain_exp
static const MMC_DEFSTRUCTLIT(boxvar_lit_TplMain_exp,2,0) {(void*) boxptr_TplMain_exp,0}};
#define boxvar_TplMain_exp MMC_REFSTRUCTLIT(boxvar_lit_TplMain_exp)
DLLExport
modelica_metatype omc_TplMain_statement(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_i_it);
#define boxptr_TplMain_statement omc_TplMain_statement
static const MMC_DEFSTRUCTLIT(boxvar_lit_TplMain_statement,2,0) {(void*) boxptr_TplMain_statement,0}};
#define boxvar_TplMain_statement MMC_REFSTRUCTLIT(boxvar_lit_TplMain_statement)
#define boxptr_TplMain_lm__1 omc_TplMain_lm__1
DLLExport
void omc_TplMain_tplMainTest(threadData_t *threadData, modelica_string _inFile);
#define boxptr_TplMain_tplMainTest omc_TplMain_tplMainTest
static const MMC_DEFSTRUCTLIT(boxvar_lit_TplMain_tplMainTest,2,0) {(void*) boxptr_TplMain_tplMainTest,0}};
#define boxvar_TplMain_tplMainTest MMC_REFSTRUCTLIT(boxvar_lit_TplMain_tplMainTest)
DLLExport
modelica_integer omc_TplMain_testTranslateTplFile(threadData_t *threadData, modelica_string _inFile, modelica_boolean _inPrintResult, modelica_boolean _inPrintErrorBuffer, modelica_integer _inNotPassedCnt);
DLLExport
modelica_metatype boxptr_TplMain_testTranslateTplFile(threadData_t *threadData, modelica_metatype _inFile, modelica_metatype _inPrintResult, modelica_metatype _inPrintErrorBuffer, modelica_metatype _inNotPassedCnt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_TplMain_testTranslateTplFile,2,0) {(void*) boxptr_TplMain_testTranslateTplFile,0}};
#define boxvar_TplMain_testTranslateTplFile MMC_REFSTRUCTLIT(boxvar_lit_TplMain_testTranslateTplFile)
DLLExport
modelica_integer omc_TplMain_testStringEquality(threadData_t *threadData, modelica_string _inStringReturned, modelica_string _inStringShouldBe, modelica_boolean _inPrintResult, modelica_boolean _inPrintErrorBuffer, modelica_string _inTestLabel, modelica_integer _inNotPassedCnt);
DLLExport
modelica_metatype boxptr_TplMain_testStringEquality(threadData_t *threadData, modelica_metatype _inStringReturned, modelica_metatype _inStringShouldBe, modelica_metatype _inPrintResult, modelica_metatype _inPrintErrorBuffer, modelica_metatype _inTestLabel, modelica_metatype _inNotPassedCnt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_TplMain_testStringEquality,2,0) {(void*) boxptr_TplMain_testStringEquality,0}};
#define boxvar_TplMain_testStringEquality MMC_REFSTRUCTLIT(boxvar_lit_TplMain_testStringEquality)
DLLExport
void omc_TplMain_translateFile(threadData_t *threadData, modelica_string _inFile);
#define boxptr_TplMain_translateFile omc_TplMain_translateFile
static const MMC_DEFSTRUCTLIT(boxvar_lit_TplMain_translateFile,2,0) {(void*) boxptr_TplMain_translateFile,0}};
#define boxvar_TplMain_translateFile MMC_REFSTRUCTLIT(boxvar_lit_TplMain_translateFile)
DLLExport
void omc_TplMain_main(threadData_t *threadData, modelica_string _inFile);
#define boxptr_TplMain_main omc_TplMain_main
static const MMC_DEFSTRUCTLIT(boxvar_lit_TplMain_main,2,0) {(void*) boxptr_TplMain_main,0}};
#define boxvar_TplMain_main MMC_REFSTRUCTLIT(boxvar_lit_TplMain_main)
#ifdef __cplusplus
}
#endif
#endif