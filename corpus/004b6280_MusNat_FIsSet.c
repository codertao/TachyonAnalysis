
/* refine: native "FIsSet" */

undefined4 MusNat_FIsSet(undefined4 *param_1)

{
  if ((*(uint *)*param_1 & param_1[-1]) != param_1[-1]) {
    return 0;
  }
  return 0xffffffff;
}

