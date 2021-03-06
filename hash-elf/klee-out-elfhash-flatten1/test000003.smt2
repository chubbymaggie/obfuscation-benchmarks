(set-logic QF_AUFBV )
(declare-fun arg0 () (Array (_ BitVec 32) (_ BitVec 8) ) )
(declare-fun model_version () (Array (_ BitVec 32) (_ BitVec 8) ) )
(assert (let ( (?B1 (select  arg0 (_ bv0 32) ) ) ) (and  (and  (and  (=  (_ bv1 32) (concat  (select  model_version (_ bv3 32) ) (concat  (select  model_version (_ bv2 32) ) (concat  (select  model_version (_ bv1 32) ) (select  model_version (_ bv0 32) ) ) ) ) ) (=  false (=  (_ bv0 8) ?B1 ) ) ) (=  (_ bv0 8) (select  arg0 (_ bv1 32) ) ) ) (=  (_ bv2 64) (ite  (=  (_ bv0 32) (bvand  ((_ sign_extend 24)  ?B1 ) (_ bv4026531840 32) ) ) (_ bv1 64) (_ bv2 64) ) ) ) ) )
(check-sat-using (then simplify solve-eqs bit-blast sat tseitin-cnf))
(exit)
