class Node
{
public:
    int key;
    int val;
    Node* next;
    Node(int key, int val)
    {
        this->key = key;
        this->val = val;
        this->next = NULL;
    }
};
class MyHashMap
{
public:
    int totalSize;
    int currSize;
    Node** table;
    MyHashMap()
    {
        totalSize = 10;
        currSize = 0;
        table = new Node*[totalSize];
        for(int i = 0; i < totalSize; i++)
        {
            table[i] = NULL;
        }
    }

    int hashFunction(int key)
    {
        return key % totalSize;
    }

    void put(int key, int value)
    {
        int idx = hashFunction(key);
        Node* temp = table[idx];
        // Key already exists
        while(temp != NULL)
        {
            if(temp->key == key)
            {
                temp->val = value;
                return;
            }
            temp = temp->next;
        }
        // Create new node
        Node* newNode = new Node(key, value);
        // Insert at beginning
        newNode->next = table[idx];
        table[idx] = newNode;
        currSize++;
    }

    int get(int key)
    {
        int idx = hashFunction(key);
        Node* temp = table[idx];
        while(temp != NULL)
        {
            if(temp->key == key)
            {
                return temp->val;
            }
            temp = temp->next;
        }
        return -1;
    }
    void remove(int key)
    {
        int idx = hashFunction(key);
        Node* temp = table[idx];
        Node* prev = NULL;
        while(temp != NULL)
        {
            if(temp->key == key)
            {
                // First node
                if(prev == NULL)
                {
                    table[idx] = temp->next;
                }
                else
                {
                    // Middle / last node
                    prev->next = temp->next;
                }
                delete temp;
                currSize--;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
    }
    ~MyHashMap()
    {
        for(int i = 0; i < totalSize; i++)
        {
            Node* temp = table[i];

            while(temp != NULL)
            {
                Node* nextNode = temp->next;
                delete temp;
                temp = nextNode;
            }
        }
        delete[] table;
    }
};