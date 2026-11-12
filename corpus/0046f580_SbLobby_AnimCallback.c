
/* sweep: guess */

void SbLobby_AnimCallback(undefined4 param_1,int param_2)

{
  SndTrig_PostEvent(param_2 + 0x94,&DAT_005833e0,&DAT_00583498);
  ImageArea_SetRect(&GLBL_UI_ELEM_LIST,param_1,0,SbLobby_AnimCallback,param_2);
  return;
}

