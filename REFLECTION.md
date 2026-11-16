### AI Exploration and Reflection

I started by asking ChatGPT to explain Run-Length Encoding from scratch; I wanted to understand the algorithm before preparing my presentation. Throughout the rest of the conversation, I became interested in its limitations, real-world applications, and made my own demonstration of it in C.

Some of the prompts I used included:

1. "I'm learning about run-length encoding for a computer science presentation. Can you explain what it is from scratch?" (This was the first prompt that I used, to begin understanding the concept.)
2. "I'm confused about why we only use letters in these examples. Can RLE compress numbers or images too?"
3. "Understood, thanks! Can you quiz me on RLE and tell me if my explanation is accurate?"

Outside of these examples, I asked ChatGPT follow-up questions and checked my understanding with practice problems. Additionally, I had it give me feedback on the small C program I made to demonstrate RLE on letter inputs. The correction I found most useful was learning that the encoder and decoder need to agree on a format rather than share a key--I was under the impression that these were synonymous. I also explored why RLE struggles with repeating patterns like `ABABAB`, even though the data contains repetition, and went ahead and found a source published by MIT on many types of encoding/decoding algorithms like RLE that solve this issue.

Toward the end, I asked ChatGPT to quiz me on the material. It gave me five questions that helped me practice explaining the algorithm, its limitations, applications in images, and issues with encoding different types of characters. I found this very particularly useful because I often struggle with articulating new concepts clearly and concisely.

If I did this again, I would spend more time experimenting with different types of data and comparing RLE with other compression algorithms that I found toward the end of the project from MIT.

**ChatGPT Conversation:** https://chatgpt.com/share/6afb4eec-ba74-83ea-bb16-668a8b3efe30