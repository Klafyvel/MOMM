mvment create_empty_mv()
{
    mvment r;
    r.x = 0;
    r.y = 0;
    r.z = 0;
    return r;
}
bool mvment_is_eq(mvment *a, mvment *b)
{
    return (*a.x == *b.x) && (*a.y == *b.y) && (*a.z == *b.z);
}

Machine::Machine()
{
}
void Machine::move(mvment mv)
{
    mvment done = create_empty_mv();
    char increment_x = mv.x / abs(mv.x);
    char increment_y = mv.y / abs(mv.y);
    char increment_z = mv.z / abs(mv.z);

    while(mvment_is_eq(&done, &mv))
    {
        if(done.x != mv.x)
        {
            if(increment_x < 0)
                axis[0].backward();
            else if(increment_x > 0)
                axis[0].forward();
            done.x += increment_x;
        }
        if(done.y != mv.y)
        {
            if(increment_y < 0)
                axis[1].backward();
            else if(increment_y > 0)
                axis[1].forward();
            done.y += increment_x;
        }
        if(done.z != mv.z)
        {
            if(increment_z < 0)
                axis[2].backward();
            else if(increment_z > 0)
                axis[2].forward();
            done.z += increment_z;
        }
        delay(this->delay);
    }
}
void Machine::set_speed_mm_per_s(int speed);
{
    
}
