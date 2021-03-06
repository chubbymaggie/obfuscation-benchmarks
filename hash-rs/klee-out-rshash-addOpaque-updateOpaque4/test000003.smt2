(set-logic QF_AUFBV )
(declare-fun arg0 () (Array (_ BitVec 32) (_ BitVec 8) ) )
(declare-fun model_version () (Array (_ BitVec 32) (_ BitVec 8) ) )
(assert (let ( (?B1 (select  arg0 (_ bv2 32) ) ) (?B2 (select  arg0 (_ bv3 32) ) ) (?B3 (select  arg0 (_ bv1 32) ) ) (?B4 (select  arg0 (_ bv0 32) ) ) ) (and  (and  (and  (and  (and  (and  (=  (_ bv1 32) (concat  (select  model_version (_ bv3 32) ) (concat  (select  model_version (_ bv2 32) ) (concat  (select  model_version (_ bv1 32) ) (select  model_version (_ bv0 32) ) ) ) ) ) (=  false (=  (_ bv0 8) ?B4 ) ) ) (=  false (=  (_ bv0 8) ?B3 ) ) ) (=  false (=  (_ bv0 8) ?B1 ) ) ) (=  false (=  (_ bv0 8) ?B2 ) ) ) (=  (_ bv0 8) (select  arg0 (_ bv4 32) ) ) ) (=  (_ bv1294241610 32) (bvadd  ((_ sign_extend 24)  ?B2 ) (bvmul  (_ bv2012804575 32) (bvadd  ((_ sign_extend 24)  ?B1 ) (bvmul  (_ bv3202212377 32) (bvadd  ((_ sign_extend 24)  ?B3 ) (bvmul  (_ bv2634698159 32) ((_ sign_extend 24)  ?B4 ) ) ) ) ) ) ) ) ) ) )
(check-sat-using (then simplify solve-eqs bit-blast sat tseitin-cnf))
(exit)
