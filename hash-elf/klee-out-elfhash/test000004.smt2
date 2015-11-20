(set-logic QF_AUFBV )
(declare-fun arg0 () (Array (_ BitVec 32) (_ BitVec 8) ) )
(declare-fun model_version () (Array (_ BitVec 32) (_ BitVec 8) ) )
(assert (let ( (?B1 (select  arg0 (_ bv1 32) ) ) (?B2 (select  arg0 (_ bv0 32) ) ) ) (let ( (?B3 ((_ sign_extend 24)  ?B2 ) ) ) (and  (and  (and  (and  (and  (=  (_ bv1 32) (concat  (select  model_version (_ bv3 32) ) (concat  (select  model_version (_ bv2 32) ) (concat  (select  model_version (_ bv1 32) ) (select  model_version (_ bv0 32) ) ) ) ) ) (=  false (=  (_ bv0 8) ?B2 ) ) ) (=  false (=  (_ bv0 8) ?B1 ) ) ) (=  (_ bv0 8) (select  arg0 (_ bv2 32) ) ) ) (=  (_ bv0 32) (bvand  ?B3 (_ bv4026531840 32) ) ) ) (=  (_ bv0 32) (bvand  (bvadd  ((_ sign_extend 24)  ?B1 ) (bvshl  (bvand  ?B3 (bvxor  (_ bv4026531840 32) (bvor  ?B3 (_ bv268435455 32) ) ) ) (_ bv4 32) ) ) (_ bv4026531840 32) ) ) ) ) ) )
(check-sat-using (then simplify solve-eqs bit-blast sat tseitin-cnf))
(exit)