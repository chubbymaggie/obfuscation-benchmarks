(set-logic QF_AUFBV )
(declare-fun arg0 () (Array (_ BitVec 32) (_ BitVec 8) ) )
(declare-fun model_version () (Array (_ BitVec 32) (_ BitVec 8) ) )
(assert (let ( (?B1 (select  arg0 (_ bv2 32) ) ) (?B2 (select  arg0 (_ bv3 32) ) ) (?B3 (select  arg0 (_ bv1 32) ) ) (?B4 (select  arg0 (_ bv0 32) ) ) ) (let ( (?B7 ((_ sign_extend 24)  ?B3 ) ) (?B8 ((_ sign_extend 24)  ?B4 ) ) (?B6 ((_ sign_extend 24)  ?B2 ) ) (?B5 ((_ sign_extend 24)  ?B1 ) ) ) (let ( (?B9 (bvadd  (bvmul  (bvand  ?B8 (_ bv2634698159 32) ) (bvor  ?B8 (_ bv2634698159 32) ) ) (bvmul  (bvand  ?B8 (_ bv1660269136 32) ) (bvand  (bvxor  (_ bv4294967295 32) ?B8 ) (_ bv2634698159 32) ) ) ) ) ) (let ( (?B10 (bvadd  (bvand  ?B9 ?B7 ) (bvor  ?B9 ?B7 ) ) ) ) (let ( (?B11 (bvadd  (bvmul  (bvand  ?B10 (_ bv3202212377 32) ) (bvor  ?B10 (_ bv3202212377 32) ) ) (bvmul  (bvand  ?B10 (_ bv1092754918 32) ) (bvand  (bvxor  (_ bv4294967295 32) ?B10 ) (_ bv3202212377 32) ) ) ) ) ) (let ( (?B12 (bvadd  (bvand  ?B11 ?B5 ) (bvor  ?B11 ?B5 ) ) ) ) (let ( (?B13 (bvadd  (bvmul  (bvand  ?B12 (_ bv2012804575 32) ) (bvor  ?B12 (_ bv2012804575 32) ) ) (bvmul  (bvand  ?B12 (_ bv2282162720 32) ) (bvand  (bvxor  (_ bv4294967295 32) ?B12 ) (_ bv2012804575 32) ) ) ) ) ) (and  (and  (and  (and  (and  (and  (=  (_ bv1 32) (concat  (select  model_version (_ bv3 32) ) (concat  (select  model_version (_ bv2 32) ) (concat  (select  model_version (_ bv1 32) ) (select  model_version (_ bv0 32) ) ) ) ) ) (=  false (=  (_ bv0 8) ?B4 ) ) ) (=  false (=  (_ bv0 8) ?B3 ) ) ) (=  false (=  (_ bv0 8) ?B1 ) ) ) (=  false (=  (_ bv0 8) ?B2 ) ) ) (=  (_ bv0 8) (select  arg0 (_ bv4 32) ) ) ) (=  (_ bv1294241610 32) (bvadd  (bvand  ?B13 ?B6 ) (bvor  ?B13 ?B6 ) ) ) ) ) ) ) ) ) ) ) )
(check-sat-using (then simplify solve-eqs bit-blast sat tseitin-cnf))
(exit)
