(set-logic QF_AUFBV )
(declare-fun arg0 () (Array (_ BitVec 32) (_ BitVec 8) ) )
(declare-fun model_version () (Array (_ BitVec 32) (_ BitVec 8) ) )
(assert (let ( (?B1 (select  arg0 (_ bv2 32) ) ) (?B2 (select  arg0 (_ bv3 32) ) ) (?B3 (select  arg0 (_ bv1 32) ) ) (?B4 (select  arg0 (_ bv5 32) ) ) (?B5 (select  arg0 (_ bv4 32) ) ) (?B6 (select  arg0 (_ bv6 32) ) ) (?B7 (select  arg0 (_ bv0 32) ) ) ) (let ( (?B8 ((_ sign_extend 24)  ?B7 ) ) ) (let ( (?B9 (bvand  ?B8 (_ bv4026531840 32) ) ) ) (let ( (?B10 (bvadd  ((_ sign_extend 24)  ?B3 ) (bvshl  (bvand  (bvxor  ?B8 (bvlshr  ?B9 (_ bv24 32) ) ) (bvxor  (_ bv4294967295 32) ?B9 ) ) (_ bv4 32) ) ) ) ) (let ( (?B11 (bvand  ?B10 (_ bv4026531840 32) ) ) ) (let ( (?B12 (bvadd  ((_ sign_extend 24)  ?B1 ) (bvshl  (bvand  (bvxor  ?B10 (bvlshr  ?B11 (_ bv24 32) ) ) (bvxor  (_ bv4294967295 32) ?B11 ) ) (_ bv4 32) ) ) ) ) (let ( (?B13 (bvand  ?B12 (_ bv4026531840 32) ) ) ) (let ( (?B14 (bvadd  ((_ sign_extend 24)  ?B2 ) (bvshl  (bvand  (bvxor  ?B12 (bvlshr  ?B13 (_ bv24 32) ) ) (bvxor  (_ bv4294967295 32) ?B13 ) ) (_ bv4 32) ) ) ) ) (let ( (?B15 (bvand  ?B14 (_ bv4026531840 32) ) ) ) (let ( (?B16 (bvadd  ((_ sign_extend 24)  ?B5 ) (bvshl  (bvand  (bvxor  ?B14 (bvlshr  ?B15 (_ bv24 32) ) ) (bvxor  (_ bv4294967295 32) ?B15 ) ) (_ bv4 32) ) ) ) ) (let ( (?B17 (bvand  ?B16 (_ bv4026531840 32) ) ) ) (let ( (?B18 (bvadd  ((_ sign_extend 24)  ?B4 ) (bvshl  (bvand  (bvxor  ?B16 (bvlshr  ?B17 (_ bv24 32) ) ) (bvxor  (_ bv4294967295 32) ?B17 ) ) (_ bv4 32) ) ) ) ) (let ( (?B19 (bvand  ?B18 (_ bv4026531840 32) ) ) ) (let ( (?B20 (bvadd  ((_ sign_extend 24)  ?B6 ) (bvshl  (bvand  (bvxor  ?B18 (bvlshr  ?B19 (_ bv24 32) ) ) (bvxor  (_ bv4294967295 32) ?B19 ) ) (_ bv4 32) ) ) ) ) (let ( (?B21 (bvand  ?B20 (_ bv4026531840 32) ) ) ) (and  (and  (and  (and  (and  (and  (and  (and  (and  (and  (and  (=  (_ bv1 32) (concat  (select  model_version (_ bv3 32) ) (concat  (select  model_version (_ bv2 32) ) (concat  (select  model_version (_ bv1 32) ) (select  model_version (_ bv0 32) ) ) ) ) ) (=  false (=  (_ bv0 8) ?B7 ) ) ) (=  false (=  (_ bv0 8) ?B3 ) ) ) (=  false (=  (_ bv0 8) ?B1 ) ) ) (=  false (=  (_ bv0 8) ?B2 ) ) ) (=  false (=  (_ bv0 8) ?B5 ) ) ) (=  false (=  (_ bv0 8) ?B4 ) ) ) (=  false (=  (_ bv0 8) ?B6 ) ) ) (=  (_ bv0 8) (select  arg0 (_ bv7 32) ) ) ) (=  (_ bv2 64) (ite  (=  (_ bv0 32) ?B9 ) (_ bv1 64) (_ bv2 64) ) ) ) (=  (_ bv1 64) (ite  (=  (_ bv0 32) ?B21 ) (_ bv1 64) (_ bv2 64) ) ) ) (=  (_ bv184139465 32) (bvand  ?B20 (bvxor  (_ bv4294967295 32) ?B21 ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) )
(check-sat-using (then simplify solve-eqs bit-blast sat tseitin-cnf))
(exit)
