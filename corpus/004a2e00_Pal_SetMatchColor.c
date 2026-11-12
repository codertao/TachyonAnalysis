
/* sweep: guess */

void Pal_SetMatchColor(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  DAT_00603480 = param_1;
  DAT_00603481 = param_2;
  DAT_00603482 = param_3;
  PalAsm_MatchColor(&DAT_00603480,&DAT_00603180);
  return;
}

