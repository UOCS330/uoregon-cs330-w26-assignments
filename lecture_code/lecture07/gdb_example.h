int some_rand(int i)
{
    if(i < 10) {
        return (rand() % N);
    } else {
        return (rand() % (N * 2));
    }
}
