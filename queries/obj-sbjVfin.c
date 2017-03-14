//Query for object fronting, intended for both V2 and non-V2 languages

node: IP*
define: /Users/yoelw/CurrentLx/OldNorse/verbtopic.def
coding_query:


// v2: fronted in a v2 way
//nonv2: fronted in a nonv2 way
// 0: in situ

1: {
	v2: (IP* idoms object)
    AND (IP* idoms NP-SBJ*|NP-NOM*)
    AND (IP* idoms finite_verb)
    AND (object precedes finite_verb)
    AND (finite_verb precedes NP-SBJ*|NP-NOM*)

    nonv2: (IP* idoms object)
    AND (IP* idoms NP-SBJ*|NP-NOM*)
    AND (IP* idoms finite_verb)
    AND (object precedes NP-SBJ*|NP-NOM*)
    AND (NP-SBJ*|NP-NOM* precedes finite_verb)

	\0: (IP* idoms object)
    AND (IP* idoms NP-SBJ*|NP-NOM*)
    AND (IP* idoms finite_verb)
    AND (finite_verb precedes object)
    AND (NP-SBJ*|NP-NOM* precedes finite_verb)

	z: ELSE
}

// obj is pronoun or demonstrative or not
2: {	
	pron: (object idomsonly PRO*)
	dem: (object idomsonly D)
    OR ((object idomsnumber 1 D) AND (D idoms *[ÐðþÞTtha]*[aáæeiyo]*[þðtmns]*))
        nom: object idoms .*
    z: ELSE
}

//sbj is pronoun or demonstrative or not
3: {	
	pron: (NP-SBJ*|NP-NOM* idomsonly PRO*)
	dem: (NP-SBJ*|NP-NOM* idomsonly D)
    OR ((NP-SBJ*|NP-NOM* idomsnumber 1 D) AND (D idoms *[ÐðþÞTtha]*[aáæeiyo]*[þðtmns]*))
        nom: NP-SBJ*|NP-NOM* idoms .*
    z: ELSE
}

// MAT vs SUB
4: {
	mat: (IP-MAT* idoms object)
    sub: (IP-SUB* idoms object)
	z: ELSE
}

/*4:{
	spch: (IP-*-SPE* idoms NP-SBJ*|NP-NOM*|object)
	    AND (NP-SBJ*|NP-NOM*|object idoms CP-REL*)	
	txt: ELSE
	}*/


// numwords of object
5: {
	\1: (IP* idoms object) AND (object domswords 1)
	\2: (IP* idoms object) AND (object domswords 2)
	\3: (IP* idoms object) AND (object domswords 3)
	\4: (IP* idoms object) AND (object domswords 4)
	\5: (IP* idoms object) AND (object domswords 5)
	\6: (IP* idoms object) AND (object domswords 6)
	\7: (IP* idoms object) AND (object domswords 7)
	\8: (IP* idoms object) AND (object domswords 8)
	\9: (IP* idoms object) AND (object domswords 9)
	\10: (IP* idoms object) AND (object domswords 10)
	\11: (IP* idoms object) AND (object domswords 11)
	\12: (IP* idoms object) AND (object domswords 12)
	\13: (IP* idoms object) AND (object domswords 13)
	\14: (IP* idoms object) AND (object domswords 14)
	\15: (IP* idoms object) AND (object domswords 15)
	\16: (IP* idoms object) AND (object domswords 16)
	\17: (IP* idoms object) AND (object domswords 17)
	\18: (IP* idoms object) AND (object domswords 18)
	\19: (IP* idoms object) AND (object domswords 19)
	\20: (IP* idoms object) AND (object domswords 20)
	\21: (IP* idoms object) AND (object domswords 21)
	\22: (IP* idoms object) AND (object domswords 22)
	\23: (IP* idoms object) AND (object domswords 23)
	\24: (IP* idoms object) AND (object domswords 24)
	\25: (IP* idoms object) AND (object domswords 25)
	\26: (IP* idoms object) AND (object domswords 26)
	\27: (IP* idoms object) AND (object domswords 27)
	\28: (IP* idoms object) AND (object domswords 28)
	\29: (IP* idoms object) AND (object domswords 29)
	\30: (IP* idoms object) AND (object domswords 30)
	\31: (IP* idoms object) AND (object domswords 31)
	\32: (IP* idoms object) AND (object domswords 32)
	\33: (IP* idoms object) AND (object domswords 33)
	\34: (IP* idoms object) AND (object domswords 34)
	\35: (IP* idoms object) AND (object domswords 35)
	\36: (IP* idoms object) AND (object domswords 36)
	\37: (IP* idoms object) AND (object domswords 37)
	\38: (IP* idoms object) AND (object domswords 38)
	\39: (IP* idoms object) AND (object domswords 39)
	\40: (IP* idoms object) AND (object domswords 40)
	\41: (IP* idoms object) AND (object domswords 41)
	\42: (IP* idoms object) AND (object domswords 42)
	\43: (IP* idoms object) AND (object domswords 43)
	\44: (IP* idoms object) AND (object domswords 44)
	\45: (IP* idoms object) AND (object domswords 45)
	\46: (IP* idoms object) AND (object domswords 46)
	\47: (IP* idoms object) AND (object domswords 47)
	\48: (IP* idoms object) AND (object domswords 48)
	\49: (IP* idoms object) AND (object domswords 49)
	\50: (IP* idoms object) AND (object domswords> 49)
	\51: (IP* idoms object) AND (object domswords 51)
	\52: (IP* idoms object) AND (object domswords 52)
	\53: (IP* idoms object) AND (object domswords 53)
	\54: (IP* idoms object) AND (object domswords 54)
	z: ELSE
}

// numwords of subject
6: {
	\1: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 1)
	\2: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 2)
	\3: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 3)
	\4: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 4)
	\5: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 5)
	\6: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 6)
	\7: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 7)
	\8: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 8)
	\9: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 9)
	\10: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 10)
	\11: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 11)
	\12: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 12)
	\13: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 13)
	\14: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 14)
	\15: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 15)
	\16: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 16)
	\17: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 17)
	\18: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 18)
	\19: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 19)
	\20: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 20)
	\21: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 21)
	\22: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 22)
	\23: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 23)
	\24: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 24)
	\25: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 25)
	\26: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 26)
	\27: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 27)
	\28: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 28)
	\29: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 29)
	\30: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 30)
	\31: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 31)
	\32: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 32)
	\33: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 33)
	\34: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 34)
	\35: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 35)
	\36: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 36)
	\37: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 37)
	\38: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 38)
	\39: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 39)
	\40: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 40)
	\41: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 41)
	\42: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 42)
	\43: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 43)
	\44: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 44)
	\45: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 45)
	\46: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 46)
	\47: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 47)
	\48: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 48)
	\49: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 49)
	\50: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords> 49)
	\51: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 51)
	\52: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 52)
	\53: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 53)
	\54: (IP* idoms NP-SBJ*|NP-NOM*) AND (NP-SBJ*|NP-NOM* domswords 54)
	z: ELSE
}
