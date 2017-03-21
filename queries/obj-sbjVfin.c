//Query for object fronting, intended for both V2 and non-V2 languages

//Note that this looks for NP-SBJ and NP-OB* only, so is not appropriate for working files, or for YCOE, or some versions of ppcme2, or early new high ger

//Note also that the regexs for demonstratives will work for Icelandic and later stages of English, but not for Old English or early Middle English

add_to_ignore: \**
node: IP-MAT*
define: /Users/yoelw/CurrentLx/OldNorse/verbtopic.def
coding_query:


// v2: fronted in a v2 way
//nonv2: fronted in a nonv2 way
// 0: in situ

1: {
	v2: (IP-MAT* idoms NP-OB*)
    AND (IP-MAT* idoms NP-SBJ*)
    AND (IP-MAT* idoms finite_verb)
    AND (NP-OB* precedes finite_verb)
    AND (finite_verb precedes NP-SBJ*)

    nonv2: (IP-MAT* idoms NP-OB*)
    AND (IP-MAT* idoms NP-SBJ*)
    AND (IP-MAT* idoms finite_verb)
    AND (NP-OB* precedes NP-SBJ*)
    AND (NP-SBJ* precedes finite_verb)

	\0: (IP-MAT* idoms NP-OB*)
    AND (IP-MAT* idoms NP-SBJ*)
    AND (IP-MAT* idoms finite_verb)
    AND (finite_verb precedes NP-OB*)
    AND (NP-SBJ* precedes finite_verb)

	z: ELSE
}

// obj is pronoun or demonstrative or not
2: {	
 pron: (IP-MAT* idoms NP-OB*) AND (NP-OB* idomsonly PRO*)
	dem: (IP-MAT* idoms NP-OB*) AND (NP-OB* idomsonly D)
    OR ((IP-MAT* idoms NP-OB*) AND (NP-OB* idoms D) AND (D idoms [Tt][Hh][eaæiyoEAÆIYO=].*[ÐÞþðtTmMnNsS].*|[Tt][Hh][eaæiyoEAÆIYO=].*[ÐÞþðtTmMnNsS]|[ÐðÞþTthHyY][eaæiyoEAÆIYO=].*[ÐÞþðtTmMnNsS].*|[ÐðÞþTthHyY][eaæiyoEAÆIYO=].*[ÐÞþðtTmMnNsS]|[Ss][áÁúÚ]))
    nom: (IP-MAT* idoms NP-OB*)
    z: ELSE
}

//sbj is pronoun or demonstrative or not
3: {	
	pron: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* idomsonly PRO*)
	dem: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* idomsonly D)
    OR ((IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* idoms D) AND (D idoms [Tt][Hh][eaæiyoEAÆIYO=].*[ÐÞþðtTmMnNsS].*|[Tt][Hh][eaæiyoEAÆIYO=].*[ÐÞþðtTmMnNsS]|[ÐðÞþTthHyY][eaæiyoEAÆIYO=].*[ÐÞþðtTmMnNsS].*|[ÐðÞþTthHyY][eaæiyoEAÆIYO=].*[ÐÞþðtTmMnNsS]|[Ss][áÁúÚ]))
    nom: (IP-MAT* idoms NP-SBJ*)
    z: ELSE
}

/*// MAT vs SUB
4: {
	mat: (IP-MAT* idoms NP-OB*)
    sub: (IP-SUB* idoms NP-OB*)
	z: ELSE
}*/

/*4:{
	spch: (IP-*-SPE* idoms NP-SBJ*|NP-OB*)
	    AND (NP-SBJ*|NP-OB* idoms CP-REL*)	
	txt: ELSE
	}*/


// numwords of NP-OB*
4: {
	\1: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 1)
	\2: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 2)
	\3: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 3)
	\4: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 4)
	\5: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 5)
	\6: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 6)
	\7: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 7)
	\8: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 8)
	\9: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 9)
	\10: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 10)
	\11: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 11)
	\12: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 12)
	\13: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 13)
	\14: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 14)
	\15: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 15)
	\16: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 16)
	\17: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 17)
	\18: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 18)
	\19: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 19)
	\20: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 20)
	\21: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 21)
	\22: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 22)
	\23: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 23)
	\24: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 24)
	\25: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 25)
	\26: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 26)
	\27: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 27)
	\28: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 28)
	\29: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 29)
	\30: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 30)
	\31: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 31)
	\32: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 32)
	\33: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 33)
	\34: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 34)
	\35: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 35)
	\36: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 36)
	\37: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 37)
	\38: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 38)
	\39: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 39)
	\40: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 40)
	\41: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 41)
	\42: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 42)
	\43: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 43)
	\44: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 44)
	\45: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 45)
	\46: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 46)
	\47: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 47)
	\48: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 48)
	\49: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords 49)
	\50: (IP-MAT* idoms NP-OB*) AND (NP-OB* domswords> 49)
	z: ELSE
}

// numwords of subject
5: {
	\1: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 1)
	\2: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 2)
	\3: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 3)
	\4: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 4)
	\5: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 5)
	\6: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 6)
	\7: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 7)
	\8: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 8)
	\9: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 9)
	\10: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 10)
	\11: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 11)
	\12: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 12)
	\13: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 13)
	\14: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 14)
	\15: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 15)
	\16: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 16)
	\17: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 17)
	\18: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 18)
	\19: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 19)
	\20: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 20)
	\21: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 21)
	\22: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 22)
	\23: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 23)
	\24: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 24)
	\25: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 25)
	\26: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 26)
	\27: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 27)
	\28: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 28)
	\29: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 29)
	\30: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 30)
	\31: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 31)
	\32: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 32)
	\33: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 33)
	\34: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 34)
	\35: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 35)
	\36: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 36)
	\37: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 37)
	\38: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 38)
	\39: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 39)
	\40: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 40)
	\41: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 41)
	\42: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 42)
	\43: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 43)
	\44: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 44)
	\45: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 45)
	\46: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 46)
	\47: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 47)
	\48: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 48)
	\49: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords 49)
	\50: (IP-MAT* idoms NP-SBJ*) AND (NP-SBJ* domswords> 49)
	z: ELSE
}

