
/* sweep */

undefined4 Mss3D_Init(undefined *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  
  ppuVar2 = &PTR_s_Miles_Fast_2D_Positional_Audio_0055e578;
  puVar1 = PTR_s_Miles_Fast_2D_Positional_Audio_0055e578;
  while( true ) {
    if (puVar1 == (undefined *)0x0) {
      return 0;
    }
    if (ppuVar2[1] == param_1) break;
    puVar1 = ppuVar2[2];
    ppuVar2 = ppuVar2 + 2;
  }
  uVar3 = Mss3D_FindProvider(*ppuVar2,param_2);
  return uVar3;
}

