
/* refine: callback slot 4 (Tach_CliDispatchEvent) with flag 1 */

void NetCli_DispatchEvent1(undefined2 *param_1)

{
  if (DAT_006af590 != (code *)0x0) {
    (*DAT_006af590)(*param_1,param_1 + 4,1);
  }
  return;
}

