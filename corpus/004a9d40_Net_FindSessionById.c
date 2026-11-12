
/* refine: session id at +8 */

undefined4 * Net_FindSessionById(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0055e3e8;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (puVar1[2] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}

