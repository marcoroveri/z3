/*++
Copyright (c) 2012 Microsoft Corporation

Module Name:

    qffpa_tactic.h

Abstract:

    Tactic QF_FPA benchmarks.

Author:

    Christoph (cwinter) 2012-01-16

Notes:


--*/
#ifndef _QFFPA_TACTIC_H_
#define _QFFPA_TACTIC_H_

#include"params.h"
class ast_manager;
class tactic;

tactic * mk_qffp_tactic(ast_manager & m, params_ref const & p = params_ref());
/*
  ADD_TACTIC("qffp", "(try to) solve goal using the tactic for QF_FP.", "mk_qffp_tactic(m, p)")
  ADD_TACTIC("qffpbv", "(try to) solve goal using the tactic for QF_FPBV (floats+bit-vectors).", "mk_qffp_tactic(m, p)")
*/

probe * mk_is_qffp_probe();
probe * mk_is_qffpbv_probe();
/*
  ADD_PROBE("is-qffp", "true if the goal is in QF_FP (floats).", "mk_is_qffp_probe()")
  ADD_PROBE("is-qffpbv", "true if the goal is in QF_FPBV (floats+bit-vectors).", "mk_is_qffp_probe()")
*/

#endif
