(set-logic QF_AUFBV )
(declare-fun arg0 () (Array (_ BitVec 32) (_ BitVec 8) ) )
(declare-fun model_version () (Array (_ BitVec 32) (_ BitVec 8) ) )
(assert (let ( (?B1 (select  arg0 (_ bv2 32) ) ) (?B2 (select  arg0 (_ bv3 32) ) ) (?B3 (select  arg0 (_ bv1 32) ) ) (?B4 (select  arg0 (_ bv4 32) ) ) (?B5 (select  arg0 (_ bv0 32) ) ) ) (and  (and  (and  (and  (and  (and  (and  (=  (_ bv1 32) (concat  (select  model_version (_ bv3 32) ) (concat  (select  model_version (_ bv2 32) ) (concat  (select  model_version (_ bv1 32) ) (select  model_version (_ bv0 32) ) ) ) ) ) (=  false (=  (_ bv0 8) ?B5 ) ) ) (=  false (=  (_ bv0 8) ?B3 ) ) ) (=  false (=  (_ bv0 8) ?B1 ) ) ) (=  false (=  (_ bv0 8) ?B2 ) ) ) (=  false (=  (_ bv0 8) ?B4 ) ) ) (=  (_ bv0 8) (select  arg0 (_ bv5 32) ) ) ) (=  (_ bv2931057595 32) (ite  (=  (_ bv1543172857 32) (bvxor  ((_ sign_extend 24)  ?B4 ) (bvshl  (bvxor  ((_ sign_extend 24)  ?B2 ) (bvshl  (bvxor  ((_ sign_extend 24)  ?B1 ) (bvshl  (bvxor  ((_ sign_extend 24)  ?B3 ) (bvshl  ((_ sign_extend 24)  ?B5 ) (_ bv7 32) ) ) (_ bv7 32) ) ) (_ bv7 32) ) ) (_ bv7 32) ) ) ) (_ bv2931057595 32) (_ bv3885754534 32) ) ) ) ) )
(check-sat)
(exit)
