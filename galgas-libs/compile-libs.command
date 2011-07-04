#!/bin/sh
#set -x
DIR=`dirname $0`/template-interpreter &&
galgas -v $DIR/template_expression_parser.gSyntax &&
galgas -v $DIR/template_functions.gSemantics &&
galgas -v $DIR/template_grammar.gGrammar &&
galgas -v $DIR/template_invocation.gSemantics &&
galgas -v $DIR/template_parser.gSyntax &&
galgas -v $DIR/template_routines.gSemantics &&
galgas -v $DIR/template_scanner.gLexique &&
galgas -v $DIR/template_semantics.gSemantics &&
echo "*** Success ***"
