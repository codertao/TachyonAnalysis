
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

void Sun_DrawGlow(void)

{
  if (DAT_0056c2e0 != 0) {
    Gfx_Lock(1);
    _DAT_0056c2bc = DAT_005b9600 + DAT_0056c344;
    _DAT_0056c2c0 = DAT_005b9604 + DAT_0056c348;
    _DAT_0056c2c4 = DAT_005b9608 + DAT_0056c34c;
    Ent_ToCameraSpace(&DAT_0056c2a0);
    Ent_Draw(&DAT_0056c2a0);
    _DAT_0056c2bc = DAT_005b9600 + DAT_0056c344 * 8;
    _DAT_0056c2c0 = DAT_005b9604 + DAT_0056c348 * 8;
    _DAT_0056c2c4 = DAT_005b9608 + DAT_0056c34c * 8;
    DAT_0056c370 = _DAT_0056c2bc - DAT_005b9600;
    DAT_0056c374 = _DAT_0056c2c0 - DAT_005b9604;
    DAT_0056c378 = _DAT_0056c2c4 - DAT_005b9608;
    DAT_0056c368 = 0;
    call_Vec_NormalizeFast((vec3 *)&DAT_0056c370);
  }
  return;
}

