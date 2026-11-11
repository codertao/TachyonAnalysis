
void __cdecl Quad_UnlinkStatic(SpED *ent)

{
  List_Remove(ent,&ent->quadrant->staticList);
  return;
}

