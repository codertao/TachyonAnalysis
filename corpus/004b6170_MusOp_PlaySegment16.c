
/* refine: op 61, play segment (u16) and yield */

undefined8 __fastcall MusOp_PlaySegment16(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort *unaff_ESI;
  
  uVar1 = *unaff_ESI;
  Music_PlaySegment((uint)uVar1);
  return CONCAT44(param_2,(uint)uVar1);
}

