template<typename T, int size>
int GetArrLength(T(&)[size]){
	return size;
}

int main() {
	int x[10];
	int y[11];
	int z[20];
	GetArrLength(x);
	GetArrLength(y);
	GetArrLength(z);
}
