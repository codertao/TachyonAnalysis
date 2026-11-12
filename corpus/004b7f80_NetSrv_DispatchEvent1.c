
/* refine: callback slot 8 (Tach_SrvDispatchEvent) with flag 1 */

void NetSrv_DispatchEvent1(undefined2 *param_1)

{
  if (DAT_006af7a8 != (code *)0x0) {
    (*DAT_006af7a8)(*param_1,param_1 + 4,DAT_006af7e0,1);
  }
  return;
}

