
/* sweep: "Playing %s" */

int Voice_Play(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 local_40 [64];
  
  if (GLBL_spacesav[0x55] < param_2) {
    param_2 = GLBL_spacesav[0x55];
  }
  if (DAT_005897c0 != 0) {
    Audio_StopSample(DAT_005897c4);
    OurFreeMem(DAT_005897c0);
  }
  uVar1 = File_SetErrorFlag(0);
  Timer_PauseBegin();
  DAT_005897c0 = Audio_LoadSample(param_1);
  Timer_PauseEnd();
  File_SetErrorFlag(uVar1);
  if (DAT_005897c0 != 0) {
    mark_alloc_memory_with_flags(DAT_005897c0,0xcccc);
    DAT_005897c4 = Audio_PlaySample3(8,DAT_005897c0,0,param_2,0x10000);
  }
  if ((DAT_005a6730 != 0) && (DAT_005b8f48 != 0)) {
    if (DAT_005897c0 == 0) {
      str_sprintf(local_40,s_Cannot_play__s_0054a4d8,param_1);
      uVar2 = DAT_005a6320._2_1_;
    }
    else {
      str_sprintf(local_40,s_Playing__s_00532978,param_1);
      uVar2 = DAT_005a632c._1_1_;
    }
    TextBar_Add(local_40,uVar2);
  }
  return DAT_005897c0;
}

