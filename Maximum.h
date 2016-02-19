template <class T, class U> //or template <class T>
T maximum(T value1, T value2, U value3)
{
    T maximumValue = value1;
    if (value2 > maximumValue) maximumValue=value2;
    if (value3 > maximumValue) maximumValue=value3;
    return maximumValue;
}